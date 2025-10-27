#include<stdio.h>
void main(){
	int  a =0,b= 1,i,c,n;
	printf("Enter The Range:");
	scanf("%d",&n);
	printf("Fibonacci Series of range %d \n",n);
	for(i = 1;i<=n;i++){
		c= a+b;
		printf("%d  ",a);
		a = b;
		b = c;
	}
}
