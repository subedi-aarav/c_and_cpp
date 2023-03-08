#include <stdio.h>
int main(){
	int i,j,size,sizeA,w=0,temp,p,q;
	int mat[3][3] = {{7,8,9},{4,5,6},{1,2,3}};
	size = sizeof(mat)/sizeof(mat[0]);
	sizeA = sizeof(mat)/4;
	int matrix[size-1][size-1];
	int arr[sizeA];
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			arr[w]=mat[i][j];
			++w;
		}
	}
	q=0;p=0;
	for(i=0;i<5;i++){
			temp = (arr[i]*arr[i+4])-(arr[i+1]*arr[i+4-1]);
			matrix[p][q]=temp;
			switch(i){
				case 0:
					p=0;
					q=1;
					break;
				case 1:
					p=1;
					q=0;
					break;
				case 2:
					p=1;
					q=1;
					break;
			}
			printf("%d\t",temp);
			if(i==2){
				i = i+1;
			}
//			printf("%d\n",i);
		}
		printf("\n\n");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("%d\t",matrix[i][j]);
			}
			printf("\n");
		}

	return 0;
}
