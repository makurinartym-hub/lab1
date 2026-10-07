cmake_minimum_required(VERSION 3.21)

project(cpp_lab_1 LANGUAGES CXX)

option(ENABLE_SANITIZERS "Enable sanitizers" OFF)

add_executable(cpp_lab_1 src/main.cpp)

target_compile_features(cpp_lab_1 PRIVATE cxx_std_17)

if(ENABLE_SANITIZERS)
    target_compile_options(cpp_lab_1 PRIVATE
        -fsanitize=address,undefined
        -fno-omit-frame-pointer
        -g
    )

    target_link_options(cpp_lab_1 PRIVATE
        -fsanitize=address,undefined
    )
endif()

enable_testing()

add_test(NAME run_program COMMAND cpp_lab_1)