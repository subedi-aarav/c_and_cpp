#include <stdio.h>
int main(){
	int arr[10];
	int i,temp;
	printf("enter the values of array : ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		temp = arr[i];
		arr[i] = arr[9-i];
		arr[9-i] = temp;
	}
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}
