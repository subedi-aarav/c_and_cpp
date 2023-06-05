#include <stdio.h>

struct stu{
		char name[20];
		int roll;
		float mark;
	};

int main(){
	int n;
	int i,j;
	printf("Enter the number of student : ");
	scanf("%d",&n);
	fflush(stdin);
	
	struct stu s[n],temp;
	
	for(i=0;i<n;i++){
		printf("\nEnter the name : ");
		scanf("%s",&s[i].name);
		fflush(stdin);
		printf("Enter the roll : ");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("Enter the mark : ");
		scanf("%f",&s[i].mark);
		fflush(stdin);
	}

	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(s[i].mark>s[j].mark){
				temp = s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	
	printf("\n Data in ascending order according to the marks :- \n");
	for(i=0;i<n;i++){
		printf("Name: %s \t Roll: %d \t Mark: %f \n",s[i].name,s[i].roll,s[i].mark);
	}
	
	return 0;
}
