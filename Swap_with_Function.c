// WAP to perform swapping Between 2 Number with Using Function
#include<stdio.h>
void Swap(int *,int *);
void main(){
	int a,b,c;
	printf("Enter First String:");
    scanf("%d",&a);
	printf("Enter Second String:");
	scanf("%d",&b);
	printf("Before swapping a = %d and b = %d \n",a,b);
	Swap(&a,&b);
	printf("After Swapping a = %d and b = %d ",a,b);
	
}
void Swap(int *p, int *q){
	int c;
    c = *p;
    *p = *q;
    *q = c;
}
