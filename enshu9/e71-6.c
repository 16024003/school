#include<stdio.h>
#include<math.h>
#define PAI 3.14159265358979
#define DEG_RAD (PAI/180.0)

double factorial(int n);
double MaclaurinCos(double x,int i);

int main(void)
{
    int cosvar;
    printf("sin(x)とcos(x)をマクローリン展開で求めます。xを弧度法で入力してください。\n");
    printf("cos(x)のx=");
    scanf("%d",&cosvar);
    printf("cos(%d)の値は %f です。\n",cosvar,MaclaurinCos(cosvar*DEG_RAD,20));
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

double MaclaurinCos(double x,int i)
{
    double Cos=0;
    if(i==0)
    {
        return 1;
    }
    else
    {
        Cos+=MaclaurinCos(x,i-1)+pow(-1,i)*pow(x,2*i)/factorial(2*i);
    }
    return Cos;
}