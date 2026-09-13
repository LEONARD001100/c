#include <stdio.h>

void printBinary(unsigned int x){
	for(int i =7;i>=0;i--){
		printf("%u",(x >> i) & 1U);
	}
	printf("\n");
}

