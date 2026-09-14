#include <stdio.h>
#include <string.h>

int unBinaryToDecimal(char val[]){
	int result = 0;
	size_t length = strlen(val);

	for(int i = 0;i < length ;i++){
		result = result * 2 + (val[i]-'0');
	}

	if (val[0]=='1'){
		return result - 256;
	}
	else{
		return result;
	}
}

void main(){
	char value[50];
	printf("Enter the binary : ");
	scanf("%s",value);
	int output=unBinaryToDecimal(value);
	printf("\n%d\n",output);
}



