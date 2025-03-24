#include <reg51.h>

void main(){
	unsigned long array[] = {0x33334444,0x99998888,0xffffbbbbb,0x55559999,0x11110000};
	unsigned long i,largest = 0;
	for(i=0;i<5;i++){
		if(largest<array[i])
			largest = array[i];
		}
	}

	