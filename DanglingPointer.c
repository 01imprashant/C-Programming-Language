#include<stdio.h>
void main(){
	int *ptr;
	{
		int x=10;
		ptr=&x;
	}
	printf("d\n",*ptr);
}
