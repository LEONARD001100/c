#include <stdio.h>
int change(int *x){
	*x=50;
	return *x;
}


int main(){
	int a=10;
	int *ptr=&a;
	printf("%d\n",a);
	printf("%p\n",(void *)&a);
	printf("%d\n",*ptr);
	printf("%p\n",ptr);
	int cha=change(&a);
	printf("%d\n",cha);
	return 0;
}
