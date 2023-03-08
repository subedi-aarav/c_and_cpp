#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d,cas;
	float roots,root1,root2,q,w;
	printf("enter a , b and c of polynomial function with degree 2 : ");
	scanf("%d%d%d",&a,&b,&c);
	
	d = pow(b,2)-(4*a*c);
	printf("deacriminant is : %d\n",d);
	
	if (d>0){
		cas = 1;
	}else if (d==0){
		cas = 2;
	}else{
		cas =3;
	}
	
	q = -(b/(2*a));
	w = ((sqrt(-d))/2*a);
	
	switch(cas){
		case 1:
			root1 = (-b+sqrt(d))/(2*a);
			root2 = (-b-sqrt(d))/(2*a);
			printf("D>0 so roots are real and distinct.\n"); 
			printf("root1 = %f\n",root1);
			printf("root2 = %f\n",root2);
			break;
		case 2:
			roots=-(b/(2*a));
			printf("D=0 so roots are real ans equal.\n");
			printf("Roots=%f\n",roots);
			break;
		case 3:
			
//			root1 = (-b+sqrt(d))/(2*a);
//			root2 = (-b-sqrt(d))/(2*a);
			printf("D<0 so roots are imaginary.\n");
			
			printf("root1 = %f + i%f\n",q,w);
			printf("root1 = %f - i%f\n",q,w);
//			printf("root1 = %f/n",root1);
//			printf("root2 = %f/n",root2);
			break;
		default:
			printf("there might be some error in your input\n");
		}
}
