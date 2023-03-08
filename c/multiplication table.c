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
	printf("enter any number : ");
	scanf("%d",&n);
	printf("enter any number : ");
	scanf("%d",&e);
	i = 1;
	do{
		w = n*i;
		printf("%d x %d = %d\n",n,i,w);
		i++;
	}while(i<=e);
	return 0;
}
