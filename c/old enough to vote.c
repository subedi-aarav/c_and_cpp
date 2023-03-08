#include <stdio.h>
int main(){
	int myage;
	printf ("enter your age : ");
	scanf("%d", &myage);
	int votingage = 18 ;
	if (myage >= votingage){
		printf("old enough to vote!");
	}else {
		printf("not old enought to vote!");
	}
	return 0;
	}

