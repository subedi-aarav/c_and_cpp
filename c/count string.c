#include <stdio.h>
#include <string.h>

int main() {
  char alphabet[20];
  printf("Enter your name: ");
  //scanf("%s",alphabet);
  gets(alphabet);
  printf("%d", strlen(alphabet));
  return 0;
}



//int main() {
//  char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//  printf("Length is: %d\n", strlen(alphabet));
//  printf("Size is: %d\n", sizeof(alphabet));
//  return 0;
//}
