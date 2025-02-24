#include<stdio.h>

int sumofdigit(int n){
	if(n<10){
		return n;
   }else{
		return n%10+sumofdigit(n/10);
   }
}

void main(){
 	int a;
 	a=sumofdigit(1234);
}

