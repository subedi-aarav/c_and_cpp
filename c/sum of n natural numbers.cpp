#include <stdio.h>
int main(){
	int n;
	printf("kindly enter the number :");
	scanf("%d" ,& n);
	int f = 0;
	int i = 1;
	while (i <=n){
		f = f + i;
		i++;
		}
		printf ("the sum is %d\n" ,f);
	
	return 0;
}
