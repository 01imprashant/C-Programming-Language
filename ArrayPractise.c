#include<stdio.h>
void f(int *p){
	p++;
	*p=*p**p;
}
void main(){
	int a[2][3]={1,2,3,4,5,6};
    f(a[0]);
    printf("%d\n",a[0][1]);
}

