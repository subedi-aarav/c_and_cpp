// program to print loops of different nature

#include<stdio.h>

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();

int main(){
	pattern1();
	pattern2();
	pattern3();
	pattern4();
	pattern5();
	pattern6();
	pattern7();
	return 0;
}


// *****
//  ***
//   *
void pattern1(){
	int i,j,k,temp1=0,temp2=5;
	for(i=0;i<3;i++){
		for(k=0;k<temp1;k++){
			printf(" ");
		}

		for(j=0;j<temp2;j++){
			printf("*");
		}
	temp2=temp2-2;
	printf("\n");
	temp1++;
	}
	printf("\n");
}
//  *
// ***
//*****
void pattern2(){
	int i,j,k,temp1=2,temp2=1;
	for(i=0;i<3;i++){
		for(j=0;j<temp1;j++){
			printf(" ");
		}
		temp1=temp1-1;
	
		for(k=0;k<temp2;k++){
			printf("*");
		}
		temp2=temp2+2;
		printf("\n");
	}
	printf("\n");
}

// N
// NE
// NEP
// NEPA
// NEPAL
void pattern3(){
	int i,j,size;
	char a[]="NEPAL";
	size = sizeof(a);
	for(i=0;i<size-1;i++){
		for(j=0;j<=i;j++){
			printf("%c",a[j]);
		}
		printf("\n"); 
	}
	printf("\n");
}

/*
N
NE
NEP
NEPA
NEPAL
NEPA
NEP
NE
N
*/
void pattern4(){
	int i,j,size;
	char a[]="NEPAL";
	size = sizeof(a);
	for(i=0;i<(size-1);i++){
		for(j=0;j<=i;j++){
			printf("%c",a[j]);
		}
		printf("\n");
	}
	for(i=0;i<(size-1);i++){
		for(j=0;j<=size-3-i;j++){
			printf("%c",a[j]);
		}
		printf("\n");
	}
	printf("\n");
}

// * * *
//  * *
//   *
void pattern5(){
	int i,j,k,temp=5,temp2;
	for(i=0;i<3;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		temp2 = 0;
		for(k=0;k<temp;k++){
			if(temp2%2==0){
				printf("*");
			}else{
				printf(" ");
			}
			temp2 = temp2 + 1;
		}
		temp = temp-2;
		printf("\n");
	}
	printf("\n");
}

/*This is a pattern function made by Sijan Pandey.*/
// ***
// **
// ******
// *
void pattern6(){
	int i,j,k;
	for(i=0;i<4;i++){
		for(j=0;j<3-i;j++){
			printf("*");
		}
		if(i==1){
			printf("\n");
			for(k=0;k<6;k++){
				printf("*");
			}	
		}
		printf("\n");
	}
}
void pattern7(){
	printf("K xa,Oii Aarav, K xa? ");
}




//OK well done aaran
//nice work
