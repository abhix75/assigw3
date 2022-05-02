#include<stdio.h>
int swap(int *n1,int *n2){
int temp=0;
temp=*n1;
*n1=*n2;
*n2=temp;
}

int main(){

int a,b;
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
printf("BEFORE SWAPPING: a=%d ; b=%d",a,b);
swap(&a,&b);
printf("\nAFTER SWAPPING: a=%d ; b=%d",a,b);
return 0;
}