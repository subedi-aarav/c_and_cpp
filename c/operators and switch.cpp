#include <stdio.h>

int main(){
	int a,b,s;
	char x;
	printf("enter first number : ");
	scanf("%d",&a);
	printf("enter second number number : ");
	scanf("%d",&b);
	printf("enter the operation u want to perform from (+,-,*,/) : ");
	scanf(" %c",&x);  // you should add a space before the %c 
	
	switch(x){
		case '+':
			s = a + b; 
			printf("%d",s);
			break;
		case '-':
			s = a - b; 
			printf("%d",s);
			break;
		case '*':
			s = a * b; 
			printf("%d",s);
			break;
		case '/':
			s = a / b; 
			printf("%d",s);
			break;
	    default:
	    	printf("yor input is not from (+,-,*,/), plz try again\n");
	    }
	
	return 0;
}
/* 
1. input two numbers from user.
2. input (+,-,*,/) from user and perform that operation to the two numbrs.
3. display the output.
*/

