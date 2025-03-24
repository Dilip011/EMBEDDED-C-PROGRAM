#include <reg51.h>

void main() 
{
    unsigned char array[] = {0x57, 0xFC};  // Byte array
    unsigned char i, ones = 0, zeros = 0;  // Counters for 1s and 0s
    unsigned char temp;

    // Count ones and zeros in the first byte (array[0])
    temp = array[0];
    for (i = 0; i < 8; i++) 
    {
        if (temp & 0x01)   // Check LSB (Least Significant Bit)
            ones++;
        else
            zeros++;
        temp >>= 1;  // Shift right
    }

    // Count ones and zeros in the second byte (array[1])
    temp = array[1];
    for (i = 0; i < 8; i++) 
    {
        if (temp & 0x01)
            ones++;
        else
            zeros++;
        temp >>= 1;
    }

    P0 = zeros;  // Output number of zeros to Port 0
    P1 = ones;   // Output number of ones to Port 1

    while (1);   // Infinite loop to keep the program running
}
