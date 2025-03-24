#include <reg51.h>
#include <stdio.h>
	
void main(){
	unsigned int i;
	unsigned char num = 12;
	unsigned long factorial = 1;
	
	for(i=1;i<=num;i++){
		factorial = factorial*i;
	}
}