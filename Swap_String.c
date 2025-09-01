// WAP to perform swapping between to number with using third variable 
#include<stdio.h>
void main(){
	int a[10],b[10],c[10],i;
	printf("Enter First String:");
	gets(a);
	printf("Enter Second String:");
	gets(b);
	for(i=0;i<=strlen(a);i++){
		c[i] = a[i];
	}
	for(i=0;i<=strlen(b);i++){
		a[i] = b[i];
	}
	for(i=0;i<strlen(a);i++){
		b[i] = c[i];
	}
	puts(a);
	puts(b);
}
