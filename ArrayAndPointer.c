#include<stdio.h>
void main(){
	int a[4]={10,20,30,40};
	int *ptr;
	ptr=&a[0];
	//ptr++;
	printf("%d\n",ptr[0]);
	printf("%d\n",ptr[1]);
	printf("%d\n",ptr[2]);
	printf("%d\n",ptr[3]);
}
