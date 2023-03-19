#include <stdio.h>

int main() {
    int arr[] = {1,2,2,4,3,6,5,5};
    int n = sizeof(arr) / sizeof(arr[0]); // find the size of num array
    int i, j, k = 0,l, found, as_found,temp,count=0,count2;
    // count and as_found for counting unique element.
    // found to creat an array with only unique element.
    //temp for storing variable value temporarily while making assinding array.
    
//-----------------------------------------------------------------------------
	printf("Orginal array :- ");
	for (i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
//create a array with assending order.
	int arr1[n];
	for(i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Array in acending order: \n");
	for (i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

//------------------------------------------------------------------------------    
//count total unique elements.
    for (i=0;i<n;i++){
    	as_found = 1;
    	for (j=0;j<i;j++){
    		if(arr[i]==arr[j]){
    			as_found = 0;
			}
		}
		if(as_found){
			count++;
		}
	}
	printf("\nTotal unique elements :%d\n\n",count);
//------------------------------------------------------------------------------    
//make a new array with only unique elements. 
    int arr2[count]; // initialize a new array to store distinct elements
    // loop through each element of num array
    for (i = 0; i < n; i++) {
        found = 0;
        // loop through the new array to check if the element already exists
        for (j = 0; j < k; j++) {
            if (arr[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        // if the element doesn't exist in the new array, add it 
        if (!found) {
            arr2[k++] = arr[i];
        }
    }
//------------------------------------------------------------------------------
// print the new array with unique elements.
	printf("New array with only unique elements from main array :-");
    printf("\narr2[] = {");
    for (i = 0; i < k; i++) {
        printf("%d", arr2[i]);
        if (i < k - 1) {
            printf(", ");
        }
    }
    printf("}\n");
    int qwe = (sizeof(arr2)/sizeof(arr2[0]));
    printf("Size of new array \"arr2\" with unique element: %d\n",qwe);
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------    
	int arr3[count];
    for(i=0;i<n;i++){
    	count2=0;
    	for(j=i;j<n;j++){
    		if(arr[i]==arr[j]){
    			count2 = count2 + 1;
			}
		}
		arr3[i] = count2;		 
	}
	for(i=0;i<count;i++){
		if(arr[i]==1){
			printf("\nthere is %d %d",arr3[i],arr2[i]);
		}else{
		printf("\nThere are %d %d",arr3[i],arr2[i]);
	}
}
    return 0;
}
