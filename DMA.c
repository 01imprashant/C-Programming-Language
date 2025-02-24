#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr;
	int N;
	int i;
	printf("Enter number of element:");
	scanf("%d",&N);
	ptr=malloc(N*sizeof(int));
	/*
	if(ptr==null)
	return;
	*/
	/*
	if(ptr!=null)
	*/
	{
	for(i=0;i<N;i++)
	scanf("%d",ptr+i);
	
	for(i=0;i<N;i++)
	printf("%d\n",*(ptr+i));	
	}
}
