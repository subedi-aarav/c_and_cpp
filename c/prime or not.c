#include <stdio.h>
int main(){
	int f=0;
	int i=1;
	int n;
	printf("Kindly enter any number you like :");
	scanf("%d" , & n);
		if(n<=1){
		printf("1 is neither prime nor composite");
		return 0;
	}
	while ( i <= n){
		if (n % i == 0)
		f++; i++;
	}

	 if (f == 2){
		printf("prime");
	} else {
		printf("not prime");
	}
	return 0;
	}
