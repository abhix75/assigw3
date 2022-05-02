#include <stdio.h>
int checkprime(int a, int b)
{
    if (b == 1)
    {
        return 1;
    }
    else
    {
       if (a % b == 0)
       {
         return 0;
       }
       else
       {
         return checkprime(a, b- 1);
       }
    }
}

int main()
{
    int n, c;
    printf("Enter a number:\n ");
    scanf("%d", &n);
    c = checkprime(n, n/ 2);
    if (c == 1)
    {
        printf("%d is a Prime number\n", n);
    }
    else
    {
        printf("%d is Not a Prime number\n", n);
    }
    return 0;
}
