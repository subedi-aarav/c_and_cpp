#include <stdio.h>

/*
do{
}while(condition);
*/
//int main(){
//	int n,i,w;
//	printf("enter any number : ");
//	scanf("%d",&n);
//	for (i=1; i<=10; i++){
//		w = n*i;
//		printf("%d x %d = %d\n",n,i,w);
//	}

int main(){
	int n,i,w,e;
	printf("kindely enter the number you want the multiplication table of : ");
	scanf("%d",&n);
	printf("upto the length of this multiplication table that u want : ");
	scanf("%d",&e);
	i = 1;
	do{
		w = n*i;
		printf("%d x %d = %d\n",n,i,w);
		i++;
	}while(i<=e);
	return 0;
}
