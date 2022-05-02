#include <stdio.h>
  int Even_Odd(int num)
{

    int r = num % 2;
    if (r == 0) {
        printf("%d is an Even number",num);
    }
    else {
        printf("%d is a Odd number",num);
    }
}

int main()
{
    int N ;
    printf("Enter a Number\n");
    scanf("%d",&N);
    Even_Odd(N);

    return 0;
}