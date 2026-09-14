#include <stdio.h>
#include <string.h>

int binToDeci(char value[]){
	size_t length=strlen(value)-1;
	int result=0;
	for(int i=0;i<length;i++){
		result=result*2+(value[i]-'0');
	}
	return result;
}

int main(){
	char value[50];
	printf("enter the binary : ");
	scanf("%s",value);
	int answer=binToDeci(value);
	printf("\n%d\n",answer);
}


