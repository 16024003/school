#include<stdio.h>
#include<math.h>

int factorial(int n);
double MaclaurinExp(int x,int i);

int main(void)
{
    int x;
    printf("exp(x)をマクローリン展開で求めます。xを入力してください。");
    scanf("%d",&x);
    printf("exp(%d)の値は %f です。\n",x,MaclaurinExp(x,20));

}

int factorial(int n)
{
    int fact;

    if (n==0)
    {
        return 1;
    }
    else
    {
        fact=n*factorial(n-1);
    }

    return fact;
}

double MaclaurinExp(x,i)
{
    double Exp;

    
    if(i==0)
    {
        return 1;
    }
    else
    {
        Exp=pow(x,i)/factorial(i);
        Exp+=MaclaurinExp(x,i-1);
    }
    return Exp;
}