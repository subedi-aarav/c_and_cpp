#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "a";
  char str2[] = "b";
  char str3[] = "c";

  // Compare str1 and str2, and print the result
  printf("%d\n", strcmp(str1, str2));
  
  // Compare str1 and str3, and print the result
  printf("%d\n", strcmp(str1, str3));
  
  return 0;
}

