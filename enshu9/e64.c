#include<stdio.h>
int factorial( int n);

int main(void)
{
    int n;

    printf("nの階乗を求めます。nを入力してください-->");
    scanf("%d",&n);
    printf("n!=%d\n",factorial(n));

    return 0;
}

int factorial( int n)
{
    int fact;
    if(n==0)
    {
        return 1;
    }
    else
    {
        fact=n*factorial(n-1);
    }
    return fact;
}