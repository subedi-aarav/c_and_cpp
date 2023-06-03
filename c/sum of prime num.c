#include <stdio.h>
int main(){
	int n,isPrime,i,sum=0,j=2;
	printf("kindly enter any numbe:");
	scanf("%d" ,&n);
	for(;j<=n;j++){
		isPrime=1;
		i=2;
		for (;i<j;i++){
			if(j%i==0){
				isPrime=0;
				break;
			}
		}
		
		if(isPrime)
		{
			sum+=j;	
		}
}
	
	printf("%d\n",sum);
	return 0;
	
}
