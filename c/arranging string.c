/*
take 10 students name and arrange it into ascending order
Hints:
 1. strcmp()
 2. strcpy()
*/
#include <stdio.h>
#include <string.h>
int main(){
	int i,j,is_okay,size=1;
	char temp[10];
//-----------------------------------------------------------------	
	char names[10][15];
	printf("enter 10 names u want to short : ");
	for (i=0;i<10;i++){
		scanf("%s",&names[i]);
	}
//-----------------------------------------------------------------
//	char names[10][15] = {"safal","aarav","diwas","nishan","ashim","sagun","sijan","nimesh","manishi",shristey"};

	size = sizeof(names)/sizeof(names[1]);
	printf("%d\n\n",size);
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			is_okay=0;
			is_okay = strcmp(names[i],names[j]);
//			printf("%d",is_okay);
			if(is_okay==1){
				strcpy(temp,names[j]);
				strcpy(names[j],names[i]);
				strcpy(names[i],temp);
			} 
		}
	}
	printf("the arranged array is : {");
	for(i=0;i<10;i++){
		printf("\"%s\"",names[i]);
		if (i<9){
			printf(",");
		}
	}
	printf("}");
return 0;
}

// fdg dfgd fdgdg rter aaa ryrt ghnhf nre a z
