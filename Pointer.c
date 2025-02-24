#include<stdio.h>
void main(){
	void *p;
	int x=10;
	char ch='A';
	p=&x;
	printf("%u\n",*(int*)p);
}
