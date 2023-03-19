#include<stdio.h>
int main(){
	int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int size;
	size = sizeof(mat)/sizeof(mat[0]);
//	printf("%d\n",size);
	int i,j=0,k,l,temp;
	for(i=0;i<size;i++){
		for(j=i;j<size;j++){
			if(i!=j){
				temp = mat[i][j];
				mat[i][j] = mat[j][i];
				mat[j][i] = temp;
			}
		}
	}
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
