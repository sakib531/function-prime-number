#include <stdio.h>

int isPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int x=2;x*x<=n;x++)
    {
        if (n%x==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Input the value: ");
    scanf("%d", &n);
    if(isPrime(n))
    {
        printf("it's not prime: 0\n");
    }
    else
    {
        printf("it's prime: 1\n");
    }
    return 0;
}
