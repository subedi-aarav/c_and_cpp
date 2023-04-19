//program ot illustrate passing an entire array to a function.

#include <stdio.h>

void display(int arr[]);

int main(){
	int arr[10];
	int i;
	printf("Enter any 10 numbers :");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	display(arr);
	return 0;
}

void display(int arr[]){
	int i,j,temp;
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
}
