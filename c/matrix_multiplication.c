#include<stdio.h>

void mul(int a,int b,int p,int q,int mat1[a][b],int mat2[p][q],int res[a][q]);

int main(){
  int a,b,p,q,i,j,k;
  printf("Enter row for first matrix:");
  scanf("%d",&a);
  printf("Enter column for first matrix:");
  scanf("%d",&b);
  printf("Enter row for second matrix:");
  scanf("%d",&p);
  printf("Enter column for second matrix:");
  scanf("%d",&q);
  if(b!=p){
    printf("Matrices cannot be multiplied:");
    return 1;
  }
  
  int mat1[a][b],mat2[p][q],res[a][q];
  printf("Enter the elements of the matrix matirx:");
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      scanf("%d",&mat1[i][j]);
    }
  }
  printf("Enter the elements for second matrix:");
  for(i=0;i<p;i++){
    for(j=0;j<q;j++){
      scanf("%d",&mat2[i][j]);
    }
  }
  mul(a,b,p,q,mat1,mat2,res);
  return 0;
}
  
  void mul(int a,int b,int p,int q,int mat1[a][b],int mat2[p][q],int res[a][q]){
  
    int i,j,k;
    
  for(i=0;i<a;i++){
    for(j=0;j<q;j++){
      res[i][j]=0;
      for(k=0;k<b;k++){
        res[i][j]+=mat1[i][k]*mat2[k][j];
      }
    }
  }
  printf("The required multiplication is:\n");
  for(i=0;i<a;i++){
    for(j=0;j<q;j++){
      printf("%d ",res[i][j]);
    }
    printf("\n");
  }
}
