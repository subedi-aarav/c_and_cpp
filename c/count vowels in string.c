#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,count=0,len;
	char a[100];
	char v[11] = "aeiouAEIOU";
	printf("Enter the string: ");
	gets(a);
	len= strlen(a);
	printf("%d\n",len);
	for(i=0;i<len;i++){
		for(j=0;j<10;j++){
			if(a[i]==v[j]){
				++count;
			}
		}
	}
	printf("Number of vowels char = %d",count);
	return 0;
}
