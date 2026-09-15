#include <stdio.h>
#include <string.h>

void reverse(char stri[]){
	int i=0;
	int j=strlen(stri)-1;

	while(i<j){
		char temp=stri[i];
		stri[i]=stri[j];
		stri[j]=temp;
		i++;
		j--;
	}
}
void decimalToBinary(int decimal,char result[50]){
	int correct_decimal;
	if (decimal==0){
		correct_decimal=0;
		result[0]='0';
		result[1]='\0';
		return;
	}
	if (decimal<0){
		correct_decimal=256+decimal;
	}
	else{
		correct_decimal=decimal;
	}

	int index=0;
	while (correct_decimal>0){
		int reminder=correct_decimal%2;
		result[index]=reminder+'0';
		correct_decimal=correct_decimal/2;
		index++;
	}
	result[index]='\0';
	reverse(result);
}

int main(){
	int decimal;
	char binary[50];
	int x=0;
	printf("Enter the decimal :");
	while(x==0){
		scanf("%d",&decimal);
		if (decimal>=-128 && decimal<=127){
			x=1;
		}
		else{
			printf("Enter the decimal in the correct renge of 8bit(-128 to 127):");
			x=0;
		}
	}
	decimalToBinary(decimal,binary);
	printf("%s\n",binary);
	return 0;
}

