#include <stdio.h>
#include <stdint.h> 
int main(){
	uint8_t array[5]={10,11,12,13,14};
	uint8_t *ptr= &array[0];

	printf("\n%d\n",*ptr);
	printf("%d\n",*(ptr+1));
	printf("%d\n",*(ptr+3));
	return 0;
}
