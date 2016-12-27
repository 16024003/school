#include<stdio.h>
#include<math.h>

double factorial(int n);
double MaclaurinExp(int x,int i);

int main(void)
{
    int x,i;
    printf("exp(x)をマクローリン展開で求めます。xを入力してください。");
    scanf("%d",&x);
    printf("exp(%d)の値は %f です。\n",x,MaclaurinExp(x,20));
    double exp_t=0;
    for(i=0;i<=20;i++)
    {
        exp_t+=pow(x,i)/factorial(i);
    }
    printf("%f",exp_t);

    return 0;

}

double factorial(int n)
{
    double fact;

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
        Exp+=MaclaurinExp(x,i-1)+pow(x,i)/factorial(i);
    }
    return Exp;
}