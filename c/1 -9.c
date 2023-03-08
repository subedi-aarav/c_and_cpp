#include <stdio.h>

int main() {
  int num;
  printf("kindly enter any between 1 to 9 number :");
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
  
  
