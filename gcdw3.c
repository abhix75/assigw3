#include <stdio.h>
int GCD(int x,int y){
if(y!=0){
    return GCD(y,x%y);
}else{
return x;
}
}
int main(){
    int a,b;
    printf("Enter two Numbers\n");
    scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is: %d",a,b,GCD(a,b));
    return 0;
}