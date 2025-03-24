#include <reg51.h>

void bubble_sort(unsigned char *arr, unsigned char n, bit ascending) {
    unsigned char i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main() {
    unsigned char data numbers[] = {25, 10, 5, 30, 15};
    unsigned char n = 5, i;
    bit order = 1; // 1 for ascending, 0 for descending
    
    bubble_sort(numbers, n, order);
    
    while (1);
}