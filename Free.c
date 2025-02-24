#include<stdio.h>
#include<stdlib.h>
void display(){
	int *ptr;
	int i;
	ptr=malloc(500*sizeof(int));
	for(i=0;i<5;i++)
	scanf("%d",ptr+i);
	for(i=0;i<5;i++)
	printf("%d\n",*(ptr+i));
	free(ptr);
}
void main(){
	display();
	display();
	display();
	display();
}
