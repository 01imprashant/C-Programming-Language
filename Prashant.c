#include<stdio.h>
int main(){
	int a[4]={10,20,30,40};
	printf("%u\n",*a);
	printf("%u\n",*&a[0]);
}
