#include<stdio.h>
#include<string.h>
int main(){
	int i,j,len;
	char a[100];
	char r[100];
	printf("Enter the sting: ");
	gets(a);
//	puts(a);
	len = strlen(a);
//	printf("%d",len);
	
	j=0;
	i=len-1;
	
	while(i>=0){
		r[j] = a[i];
		j++;
		i--;
	}	
	puts(r);	
	return 0;
}
