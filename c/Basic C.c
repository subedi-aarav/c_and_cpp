#include <stdio.h>

void function1();
void function2();
void function3();
void function4();
void function5();
void function6();

int main(){
//	printf("Function1 Call : \n");
//	function1();
//	printf("\n\nFunction2 Call : \n");
//	function2();
//	printf("\n\nFunction3 Call : \n");
//	function3();
//	printf("\n\nFunction4 Call : \n");
//	function4();
//	printf("\n\nFunction5 Call : \n");
//	function5();
	printf("\n\nFunction6 Call : \n");
	function6();
	
	return;
}

//indexing in 2D loop.
void function1(){
	printf("there are 6 rows and 5 column\n");
	int r,c;
	printf ("enter the row: ");
	scanf("%d",&r);
	printf ("enter the column: ");
	scanf("%d",&c);
	
	int matrix[6][5] = {{1,4,2,6,8},{3,6,8,3,5},{1,4,2,6,8},{3,6,8,3,5},{1,4,2,6,8},{3,6,8,3,5}};
	printf("%d",matrix[r][c]);
}

//number between 1 to 9.
void function2() {
  int num;
  printf("kindly enter any number between 1 to 9 number :");
  scanf ("%d", &num);
  
  switch (num){
  	case 1:
  		printf("you entered one");
  		break;
  	case 2:
  		printf("you entered two");
  		break;
  	case 3:
  		printf("you entered three");
  		break;
  	case 4:
  		printf("you entered four");
  		break;
  	case 5:
  		printf("you entered five");
  		break;
  	case 6:
  		printf("you entered six");
  		break;
  	case 7:
  		printf("you entered seven");
  		break;
  	case 8:
  		printf("you entered eight");
  		break;
  	case 9:
  		printf("you entered nine");
  		break;
  	default:
  		printf("the number you entered is not between 1 to 9!");
  }
  return 0;
}

void function3(){
	int i;
	printf("enter the number u want to print from 0 to 9: ");
	scanf("%d",&i);
	int numbers[] ={0,1,2,3,4,5,6,7,8,9};
	printf("%d",numbers[i]);
}


#include <stdio.h>
void function4() {
  int i,j;
  printf("enter the nummber between 0 to 9 and i wont print that number: ");
  scanf("%d",&j);
  
  for (i = 0; i < 10; i++) {
    if (i == j) {
      continue;
    }
    printf("%d\n", i);
  }   
}  

  
void function5(){
	printf("looping throught the array {{1,2,3},{4,5,6}} we get :- \n");
	int matrix[2][3]={{1,2,3},{4,5,6}};
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\n",matrix[i][j]);
		}
	}
} 


void function6() {
	printf("looping throught the string \"Volvo\" we get :- \n");
	char carName[] = "Volvo";
    int i;
    for (i = 0; i < 5; i++) {
		printf("%c\n", carName[i]);
  	}
  	return 0;
}
