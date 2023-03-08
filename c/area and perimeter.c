#include <stdio.h>
#include <string.h>

int main(){
	int area, perimeter, l, b, h, s1, s2, s3;
	char shape[15];
	char oper[15];
	
	printf("Enter the shape (triangle or square or rectangle): ");
	scanf("%s", shape);
	printf("Enter the operation (area or perimeter): ");
	scanf("%s", oper);
	
	if (strcmp(shape, "triangle") == 0){
		if (strcmp(oper, "area") == 0){
			printf("Enter breadth of triangle: ");
			scanf("%d", &b);
			printf("Enter height of triangle: ");
			scanf("%d", &h);
			area = ((b * h) / 2);
			printf("The area of the triangle is: %d\n", area);
		}
		else if (strcmp(oper, "perimeter") == 0){
			printf("Enter side 1 of triangle: ");
			scanf("%d", &s1);
			printf("Enter side 2 of triangle: ");
			scanf("%d", &s2);
			printf("Enter side 3 of triangle: ");
			scanf("%d", &s3);
			perimeter = (s1 + s2 + s3);
			printf("The perimeter of the triangle is: %d\n", perimeter);
		}
	}
	else if (strcmp(shape, "square") == 0){
		if (strcmp(oper, "area") == 0){
			printf("Enter length of square: ");
			scanf("%d", &l);
			area = (l * l);
			printf("The area of the square is: %d\n", area);
		}
		else if (strcmp(oper, "perimeter") == 0){
			printf("Enter length of square: ");
			scanf("%d", &l);
			perimeter = (4 * l);
			printf("The perimeter of the square is: %d\n", perimeter);
		}
	}
	else if (strcmp(shape, "rectangle") == 0){
		if (strcmp(oper, "area") == 0){
			printf("Enter length of rectangle: ");
			scanf("%d", &l);
			printf("Enter breadth of rectangle: ");
			scanf("%d", &b);
			area = (l * b);
			printf("The area of the rectangle is: %d\n", area);
		}
		else if (strcmp(oper, "perimeter") == 0){
			printf("Enter length of rectangle: ");
			scanf("%d", &l);
			printf("Enter breadth of rectangle: ");
			scanf("%d", &b);
			perimeter = ((2 * l) + (2 * b));
			printf("The perimeter of the rectangle is: %d\n", perimeter);
		}
	}
	else {
		printf("Invalid input. Please try again.\n");
	}
	
	return 0;
}
