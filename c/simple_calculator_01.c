#include <stdio.h>

int main() {
   char op;
   double num1, num2, result;

   printf("Enter an operator (+, -, *, /): ");
   scanf("%c", &op);

   printf("Enter two operands: ");
   scanf("%lf %lf", &num1, &num2);

   switch(op) {
      case '+':
         result = num1 + num2;
         break;
      case '-':
         result = num1 - num2;
         break;
      case '*':
         result = num1 * num2;
         break;
      case '/':
         if (num2 == 0) {
            printf("Error: Division by zero!\n");
            goto end;
         }
         result = num1 / num2;
         break;
      default:
         printf("Error: Invalid operator!\n");
         goto end;
   }

   printf("Result: %.2lf\n", result);

   end:
   printf("Program terminated.\n");
   return 0;
}
