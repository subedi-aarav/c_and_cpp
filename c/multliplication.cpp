#include <stdio.h>
int main(){
	int p;
	printf("Kindly enter any number you want for the multplication table : ");
	scanf ("%d", &p);
	int i = 1;
	int m;
	while (i <= 10){
	m = p * i;
	printf("%d x %d = %d\n", p , i , m);
	i++; 
}
return 0;
}
