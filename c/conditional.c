/*
Accept any two numbers, if the first number is greater 
than second then print the sum of these two numbers, 
otherwise print their difference. Write this program 
using ternary operator.
*/
#include<stdio.h>
int main(){
	int a,b,z;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	z=(a>b)?(a+b):(a-b);
	printf("The needed operation is %d",z);
	return 0;
	
	
}

