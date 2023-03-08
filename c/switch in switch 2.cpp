#include <stdio.h>

int main() {
    int area, perimeter, l, b, h, s1, s2, s3;
    char shape[15];
    char oper[15];

    printf("enter the shape (triangle or square or rectangle): ");
    scanf("%s", shape);
    printf("enter the operation (area or perimeter): ");
    scanf("%s", oper);

    switch (shape[0]) {
        case 't':
        case 'T':
            switch (oper[0]) {
                case 'a':
                case 'A':
                    printf("enter breadth of triangle:");
                    scanf("%d", &b);
                    printf("enter height of triangle:");
                    scanf("%d", &h);
                    area = (b * h) / 2;
                    printf("the area of the triangle is : %d", area);
                    break;
                case 'p':
                case 'P':
                    printf("enter side1 of triangle:");
                    scanf("%d", &s1);
                    printf("enter side2 of triangle:");
                    scanf("%d", &s2);
                    printf("enter side3 of triangle:");
                    scanf("%d", &s3);
                    perimeter = s1 + s2 + s3;
                    printf("the perimeter of the triangle is : %d", perimeter);
                    break;
                default:
                    printf("Invalid operation entered for triangle.");
                    break;
            }
            break;
        case 's':
        case 'S':
            switch (oper[0]) {
                case 'a':
                case 'A':
                    printf("enter length of square:");
                    scanf("%d", &l);
                    area = l * l;
                    printf("area of the square is: %d", area);
                    break;
                case 'p':
                case 'P':
                    printf("enter length of square:");
                    scanf("%d", &l);
                    perimeter = 4 * l;
                    printf("perimeter of the square is: %d", perimeter);
                    break;
                default:
                    printf("Invalid operation entered for square.");
                    break;
            }
            break;
        case 'r':
        case 'R':
            switch (oper[0]) {
                case 'a':
                case 'A':
                    printf("enter length of rectangle:");
                    scanf("%d", &l);
                    printf("enter breadth of rectangle:");
                    scanf("%d", &b);
                    area = l * b;
                    printf("area of rectangle is : %d", area);
                    break;
                case 'p':
                case 'P':
                    printf("enter length of rectangle:");
                    scanf("%d", &l);
                    printf("enter breadth of rectangle:");
                    scanf("%d", &b);
                    perimeter = 2 * (l + b);
                    printf("perimeter of the rectangle is: %d", perimeter);
                    break;
                default:
                    printf("Invalid operation entered for rectangle.");
                    break;
            }
            break;
        default:
            printf("Invalid shape entered.");
            break;
    }

    return 0;
}

