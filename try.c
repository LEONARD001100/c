#include <stdio.h>

int main(){
	int a=20;
	int *p=&a;
	printf("%d\n",a);
	printf("%p\n",(void *)&a);
	printf("%p\n",p);
	return 0;
}
