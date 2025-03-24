#include <reg51.h>

void main() {
    unsigned char hex_value = 0xCF;  // Hexadecimal value (207 in decimal)
    unsigned char hundreds, tens, ones;
    unsigned char decimal_value;

    // Convert hex to decimal
    decimal_value = hex_value;  // 0xCF = 207 (Decimal)

    // Extract digits
    hundreds = decimal_value / 100;      // 207 / 100 = 2
    tens = (decimal_value % 100) / 10;   // (207 % 100) / 10 = 0
    ones = decimal_value % 10;           // 207 % 10 = 7

    // Display on Ports
    P2 = hundreds;  // Hundreds place ? P2
    P1 = tens;      // Tens place ? P1
    P0 = ones;      // Ones place ? P0

    while (1);  // Infinite loop to keep output stable
}
