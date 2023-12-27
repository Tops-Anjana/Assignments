#include<stdio.h>
int main(){
	char name[5][20];
	int i;
	for(i=0;i<5;i++){
		printf("Enter name %d:",i+1);
        scanf("%s",&name[i]);
	}
	printf("List of names: \n");
	for(i=0;i<5;i++){
		printf("%s \n",name[i]);
	}
}