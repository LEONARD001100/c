#include <stdio.h>

typedef struct
{
	float average;
	int mark;
	char letter;
}details;
int main(){
	details d;
	d.average=3.4;
	d.mark=5;
	d.letter='l';

	details *ptr = &d;

	printf("%f\n",ptr->average);
	printf("%d\n",ptr->mark);
	printf("%c\n",ptr->letter);
	return 0;

}

