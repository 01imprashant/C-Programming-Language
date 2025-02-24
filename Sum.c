#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
void main(){
	int a=2;
    int b=4;
    int ans=sum(a,b);
    printf("Sum:%d\n",ans);
}
