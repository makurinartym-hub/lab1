#include <iostream>

int main()
{
    int* numbers = new int[3]{10, 20, 30};

    volatile int index = 2;
    std::cout << "Number: " << numbers[index] << '\n';

    delete[] numbers;
    return 0;
}