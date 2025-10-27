#include<stdio.h>
void main(){
	int a[5],i,num,j;
	printf("Enter 5 Element in an Array.\n");
	for(i=0;i<5;i++){
		printf("Enter value at %d position:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter a Element in an array:");
	scanf("%d",&num);
	for(i=0;i<5;i++){
		if(a[i]==num){
			break;	
		}
	}
	for(j=i;i<5;i++){
		a[i] = a[i+1];
	}
	for(i =0;i<4;i++){
		printf("%d  ",a[i]);
	}
	
}
