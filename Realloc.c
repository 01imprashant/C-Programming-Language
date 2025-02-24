#include<stdio.h>
#include<stdlib.h>
void main(){
	int i;
	int *ptr;
	ptr=malloc(5*sizeof(int));
	
	for(i=0;i<5;i++)
	scanf("%d",ptr+i);
	for(i=0;i<5;i++)
	printf("%d\n",*(ptr+i));
	
	ptr=realloc(ptr,10*sizeof(int));
	
	for(i=0;i<10;i++)
	scanf("%d",ptr+i);
	for(i=0;i<10;i++)
	printf("%d\n",*(ptr+i));
}
