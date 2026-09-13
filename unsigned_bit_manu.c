#include <stdio.h>
#include <stdint.h>
#include "function.h"

int main(){
	uint8_t value = 255;
	printBinary(value);
	printf("\n");

	//set bit 2
	printf("set bit 2 \n");
	value |= (1U << 2);
	printBinary(value);
	printf("\n");

	//set bit 6
	printf("set bit 6\n");
	value |= (1U << 6);
	printBinary(value);
	printf("\n");

	//check bit 3 is set
	printf("check bit 3 is set\n");
	if (value &(1U << 3)){
		printf("set\n");
	}
	else{
		printf("not set\n");
	}

	//clear bit 3
	printf("clear bit 3\n");
	value &= ~(1U << 3);
	printBinary(value);
	printf("\n");

	//toggle bit 6
	printf("toggle bit 6\n");
	value ^=(1U << 6);
	printBinary(value);
	printf("\n");
}



