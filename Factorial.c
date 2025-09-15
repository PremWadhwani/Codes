#include<stdio.h>
int main(){
	int num,i,f =1,temp;
	printf("Enter a Number:");
	scanf("%d",&num);
	temp = num;
	while(num!=1){
		f = f*num;
		num--;
	}
	printf("Factorial of %d is %d",temp,f);
}
