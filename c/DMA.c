/*
Four function for implementation of DMA are:-

	malloc
	ptr = (ptr-type*) malloc(size_in_bytes)

	calloc  -->  contiguous allocation
	ptr = (ptr-type*) calloc (n,size_in_bytes)
	
	realloc --> reallocation
	ptr = (ptr-type*) realloc (ptr,new_size_in_bytes)

	free --> free the allocated memory
	free(ptr)

*/

#include <stdio.h>
#include <stdlib.h>

int  main(){
	// use of malloc
	int i,n;
	int *ptr;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	ptr = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter the value no %d of this array: ",i+1);
		scanf("%d",&ptr[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("Enter the value no %d of this array is: %d\n",i+1,ptr[i]);
	}


//---------------------------------------------------------------------------------

	
// use of calloc
//	int i,n;
//	int *ptr;
//	printf("Enter the size of array: ");
//	scanf("%d",&n);
//	ptr = (int*)calloc(n,sizeof(int));
//	for(i=0;i<n;i++){
//		printf("Enter the value no %d of this array: ",i+1);
//		scanf("%d",&ptr[i]);
//	}
//	printf("\n");
//	
//	for(i=0;i<n;i++){
//		printf("Enter the value no %d of this array is: %d\n",i+1,ptr[i]);
//	}


//--------------------------------------------------------------------------------

//use of realloc
	printf("\nEnter the size of new array you want to create: \n");
	scanf("%d",&n);
	
	ptr = (int*)realloc(ptr, n*sizeof(int));
	
	for(i=0;i<n;i++){
		printf("Enter the value no %d of this array: ",i+1);
		scanf("%d",&ptr[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("Enter the value no %d of this array is: %d\n",i+1,ptr[i]);
	}	
	
	free(ptr);
	
	return 0;
}
