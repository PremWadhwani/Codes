#include<stdio.h>
int main(){
	int num,i,rem,sum = 0;
	printf("Enter a Number:");
	scanf("%d",&num);
	while(num!=0){
		rem = num%10;
		sum = sum*10 + rem;
		num = num/10;
	}
	printf("Reverse of Given Number is %d",sum);
	return 0;
}
