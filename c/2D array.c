#include <stdio.h>
int main(){
	printf("there are 6 rows and 5 column\n");
	int r,c;
	printf ("enter the row: ");
	scanf("%d",&r);
	printf ("enter the column: ");
	scanf("%d",&c);
	
	int matrix[6][5] = {{1,4,2,6,8},{3,6,8,3,5},{1,4,2,6,8},{3,6,8,3,5},{1,4,2,6,8},{3,6,8,3,5}};
	printf("%d",matrix[r][c]);
	return 0;
}


//Change Elements in a 2D Array
//int main() {
//  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
//  matrix[0][0] = 9;
//  printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1
// 
//  return 0;
//}
