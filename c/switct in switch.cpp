#include <stdio.h>
#include<ctype.h>
int main(){
	int area,perimeter,l,b,h,s1,s2,s3;
	char shape;
	char oper;
	printf("enter (t for triangle)   (s for square)  (r for rectangle): ");
	scanf(" %c",&shape);
	shape = toupper(shape);
	printf("enter (a for area)  (p for perimeter): ");
	scanf(" %c",&oper);
	oper = toupper(oper);
	
	switch (shape){
		case 'T':			
			switch(oper){
				case 'A':
					printf("enter breadth of triangle:");
					scanf("%d",&b);
					printf("enter height of triangle:");
					scanf("%d",&h);
					area = ((b*h)/2);
					printf("the area of the triangle is %d",area);
					break;
				case 'P':
					printf("enter side1 of triangle:");
					scanf("%d",&s1);
					printf("enter side2 of triangle:");
					scanf("%d",&s2);
					printf("enter side3 of triangle:");
					scanf("%d",&s3);
					perimeter = (s1 + s2 + s3);
					printf("the perimeter of the triangle is : %d",perimeter);
					break;
			}
			break;
			
		case 'S':
			switch(oper){
				case 'A':
					printf("enter length of square:");
					scanf("%d",&l);
					area = (l*l);
					printf("area of the square is: %d",area);
					break;
				case 'P':
					printf("enter length of square:");
					scanf("%d",&l);
					perimeter = (4*l);
					printf("perimeter of the square is: %d",perimeter);
					break;
			}
			break;
			
		case 'R':
			switch(oper){
				case 'A':
					printf("enter length of rectangle:");
					scanf("%d",&l);
					printf("enter breadth of rectangle:");
					scanf("%d",&b);
					area = (l*b);
					printf("area of rectangle is : %d",area);
					break;
				case 'P':
					printf("enter length of rectangle:");
					scanf("%d",&l);
					printf("enter breadth of rectangle:");
					scanf("%d",&b);
					perimeter = ((2*l)+(2*b));
					printf("perimeter of the rectangle is: %d",perimeter);
					break;
			}
			break;
	}
	return 0;
}

/*
1. input (triangle or square or rectangle) from user.
2. input (area , perimeter or both) from user.
3. perform the specified task and display the output.
*/
