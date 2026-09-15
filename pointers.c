#include <stdio.h>

int main(){
	int x=10;
	int *ptr=&x;

	printf("\n%d\n",x);
	printf("%p\n",&x);
	printf("%d\n",*ptr);
	printf("%p\n",ptr);

	*ptr=50;
	printf("%d",x);
	return 0;
}

