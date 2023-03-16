#include <stdio.h>
int main(){
	int i,n,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum = sum +i;
		}
	}
	if(sum == n){
		printf("The entered number is a perfect number ");
	}else{
		printf("The entered number is not a perfect number ");
	}
	return 0;
}

// (6,28, 496, 8128) are few perfect numbers
// here:-
//      1+2+3 = 6
//      1+2+4+7+14 = 28  
//     (1,2,4,7,14) are the proper divisors of 28.
