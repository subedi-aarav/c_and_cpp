#include <stdio.h>
#include<ctype.h>
int main(){
	char any;
	printf("enter any char : ");
	scanf("%c",&any);
	any = toupper(any);
	
	switch(any){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("the enterd character is VOWEL.");
			break;
	default:
		printf("the entered character is CONSONANT.");
	}
	return 0;
}
