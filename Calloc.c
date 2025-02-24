#include<stdio.h>
#include<stdlib.h>
void main(){
	int i;
	int *ptr;
	ptr=calloc(5,sizeof(int));
	printf("Enter the number:");
	
	for(i=0;i<5;i++)
	scanf("%d",ptr+i);
	for(i=0;i<5;i++)
	printf("%d\n",*(ptr+i));
}
