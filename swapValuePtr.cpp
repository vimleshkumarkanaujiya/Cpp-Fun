#include <iostream>

void updateValue(int* ptr) {
    (*ptr)++; // Increment the value pointed to by ptr
}

void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int value = 10;
    int* ptr = &value;

    std::cout << "Value: " << value << std::endl;
    std::cout << "Pointer: " << *ptr << std::endl;

    updateValue(ptr);

    std::cout << "Updated Value: " << value << std::endl;

    int a = 5;
    int b = 7;

    std::cout << "Before Swap - a: " << a << ", b: " << b << std::endl;

    swapValues(a, b);

    std::cout << "After Swap - a: " << a << ", b: " << b << std::endl;

    return 0;
}
