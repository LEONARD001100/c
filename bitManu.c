#include <stdio.h>
void printBinary(unsigned int value){
	for(int i =7;i>=0;i--){
		printf("%u",(value >> i)&1U);
	}
}

int main(){
	int value=1;
	printBinary(value);
	printf("\n");
	//set bit 2
	value |= (1U << 2);
	printf("%d\n",value);
	printBinary(value);
	printf("\n");
	//set bit 5
	value |= (1U << 5);
	printf("%d\n",value);
	printBinary(value);
	printf("\n");
	//check the bit 2 is set
	if (value & (1U << 2)){
		printf("set\n");
	}
	else{
		printf("Not set\n");
	}
	//clear bit 2
	value &= ~(1U << 2);
	printf("%d\n",value);
	printBinary(value);
	printf("\n");
	//toggle bit by 5
	value ^= (1U << 5);
	printf("%d\n",value);
	printBinary(value);
}


	

