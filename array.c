#include <stdio.h>

int main(){
	int arr[]={10,11,12,13,14,15};
	printf("%zu\n",sizeof(arr));
	size_t length = sizeof(arr)/sizeof(arr[0]);
	printf("%zu\n",length);
	for(int *ptr = &arr[0] ; ptr < &arr[0]+length ; ptr++){
		printf("%d\n",*ptr);
	}
	return 0;
}
