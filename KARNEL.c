#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SIZE 5
#define KERNAL_SIZE 3
void main(){
	int matrix[5][5]={{5,6,2,5,1},{3,2,1,0,1},{5,6,8,9,1},{2,6,8,4,6},{1,3,6,8,0}},
	kernal[KERNAL_SIZE][KERNAL_SIZE]={{2,3,5},{2,1,0},{2,1,1}},i=0,j=0,strip=1,newI=0,
	newJ=0,tempI,tempJ,size,kernalI=0,kernalJ=0,k;
	float feature_map[3][3],sum=0;
		size= (SIZE-KERNAL_SIZE)+1;
		for(newI=0;newI<size;newI++){
			tempI=newI;
			for(newJ=0;newJ<size;newJ++){	
				sum=0;
				tempI=i;
				tempJ=j;
				kernalI=kernalJ=0;
			for(;i<3+tempI;i++){
				kernalJ=0;
				j=tempJ;
			for(;j<3+tempJ;j++){
				sum+=matrix[i][j]*kernal[kernalI][kernalJ];
				sum/=pow(KERNAL_SIZE,2);
				kernalJ+=1;
				}
				kernalI+=1;
			}
			feature_map[newI][newJ]=sum;
			i=tempI;
			j=tempJ+1;
		}
		i=tempI+1;
		j=0;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%f\t",feature_map[i][j]);
		}
		printf("\n");
	}
	getch();
	return;
}
