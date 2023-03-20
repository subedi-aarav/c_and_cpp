#include <stdio.h>

int arr[] = {1,2,2,4,6,5,5,7,7,7,8,9,9,9,9,2,1};
int n = sizeof(arr) / sizeof(arr[0]);
int i, j, k = 0,l, found, as_found,temp,count=0,count2;


void fun1();	//orginal Array.
void fun2();	//Array in acending order.
void fun3();	//count total unique elements.
void fun4();	//make a new array(arr2) with only unique elements. Print the new array and size of new array.
void fun5(int arr[]); //Creat a new count array(arr3). Display the number of repetition of each array.

int main(){
	fun1();
	fun2();
	fun3();
	fun4();
//	fun5();

	return 0;
}

void fun1(){
	printf("Orginal array :- ");
	for (i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n\n");
}

void fun2(){
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
	printf("\n\n");
}

void fun3(){
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
	printf("Total unique elements :%d\n\n",count);
}

void fun4(){
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
    //print the items of the new array.
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
    fun5(arr2);
}

void fun5(int arr2[]){
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
}
