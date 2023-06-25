#include <iostream>

int main() {
    // Bitwise AND (&) example
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011
    int result = a & b;  // Binary: 0001
    std::cout << "Bitwise AND result: " << result << std::endl;

    // Bitwise OR (|) example
    int c = 5;  // Binary: 0101
    int d = 3;  // Binary: 0011
    int result2 = c | d;  // Binary: 0111
    std::cout << "Bitwise OR result: " << result2 << std::endl;

    // Bitwise XOR (^) example
    int e = 5;  // Binary: 0101
    int f = 3;  // Binary: 0011
    int result3 = e ^ f;  // Binary: 0110
    std::cout << "Bitwise XOR result: " << result3 << std::endl;

    // Bitwise NOT (~) example
    int g = 5;  // Binary: 0101
    int result4 = ~g;  // Binary: 1010
    std::cout << "Bitwise NOT result: " << result4 << std::endl;

    // Left shift (<<) example
    int h = 5;  // Binary: 0101
    int result5 = h << 2;  // Binary: 010100 (Shift left by 2 positions)
    std::cout << "Left shift result: " << result5 << std::endl;

    // Right shift (>>) example
    int i = 20;  // Binary: 10100
    int result6 = i >> 2;  // Binary: 00101 (Shift right by 2 positions)
    std::cout << "Right shift result: " << result6 << std::endl;

    // Bit manipulation techniques
    int j = 10;  // Binary: 1010

    // Setting a bit
    int mask1 = 1 << 2;  // Binary: 0100
    int result7 = j | mask1;  // Set the bit at position 2 to 1
    std::cout << "Setting a bit result: " << result7 << std::endl;

    // Clearing a bit
    int mask2 = ~(1 << 3);  // Binary: 1111011
    int result8 = j & mask2;  // Clear the bit at position 3
    std::cout << "Clearing a bit result: " << result8 << std::endl;

    // Toggling a bit
    int mask3 = 1 << 1;  // Binary: 0010
    int result9 = j ^ mask3;  // Toggle the bit at position 1
    std::cout << "Toggling a bit result: " << result9 << std::endl;

    // Checking if a bit is set
    int mask4 = 1 << 2;  // Binary: 0100
    bool isBitSet = (j & mask4) != 0;  // Check if the bit at position 2 is set
    std::cout << "Is bit set? " << std::boolalpha << isBitSet << std::endl;

    return 0;
}
