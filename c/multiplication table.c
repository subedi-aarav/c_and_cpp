#include <stdio.h>

int main(){
	int n,i,w,e;
	printf("kindely enter the number you want the multiplication table of : ");
	scanf("%d",&n);
	printf("upto what length dou you mant this multiplication table : ");
	scanf("%d",&e);
	i = 1;
	do{
		w = n*i;
		printf("%d x %d = %d\n",n,i,w);
		i++;
	}while(i<=e);
	return 0;
}
