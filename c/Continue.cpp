#include <stdio.h>

int main() {
  int i,j;
  printf("enter the nummber between 0 to 9 and i wont print that number: ");
  scanf("%d",&j);
  
  for (i = 0; i < 10; i++) {
    if (i == j) {
      continue;
    }
    printf("%d\n", i);
  }   
  
  return 0;
}
