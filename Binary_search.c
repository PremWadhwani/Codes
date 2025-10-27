#include<stdio.h>
void main(){
	int low = 0,mid,high=4,i,f = 0,num;
	int  a[]= {10,20,30,40,50};
	printf("Enter Number To find in Element in an Array:");
	scanf("%d",&num);
	while(low<=high){
		mid = (low + high)/2;
		if(a[mid]==num){
			f =1;
			break;
		}
		else if(a[mid]>num){
			high = mid - 1;
		}
		else{
			low = mid +1;
		}
	}
	if(f==1){
		printf("%d is found at %d Position",num,mid+1);
	}
	else{
		printf("%d is not found.",num);	
	}
	
}
