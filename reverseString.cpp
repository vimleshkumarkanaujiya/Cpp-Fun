#include <iostream>
#include <string>

std::string reverseString(const std::string& str) {
    std::string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::string reversedString = reverseString(inputString);
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}
