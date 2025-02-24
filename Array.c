#include<stdio.h>
void main(){
	int a[2][3]={1,2,3,4,5,6};
	printf("%u\n",a+0);
	printf("%u\n",&a+1);
	printf("%u\n",&a);
	printf("%u\n",&a[0]);
}
