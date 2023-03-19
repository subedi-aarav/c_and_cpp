#include <stdio.h>
int main(){
	int size,i,j,sizeM,ww=0;
	int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	size = sizeof(mat)/sizeof(mat[0]);
	int Nsize = size+1;
	int matrix[size][size+1];
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			matrix[i][j] = mat[i][j];
		}
	}
	for(i=0;i<size;i++){
		matrix[i][size] = mat[i][0];
	}
	sizeM = sizeof(matrix)/4;
	printf("%d\n",sizeM);
	
	int arr[sizeM];
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			arr[ww]=matrix[i][j];
			++ww;
		}
	}
	return 0;
}
