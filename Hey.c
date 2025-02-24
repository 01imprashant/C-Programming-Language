#include<stdio.h>
int main(){
	int arr[4]={10,20,30,40};
	int *ptr=&arr[0];
	ptr++;
	printf("%d\n",*ptr);
}
