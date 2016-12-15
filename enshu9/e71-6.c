#include<stdio.h>
#include<math.h>
#define PAI 3.14159265358979
#define DEG_RAD (PAI/180.0)

int factorial(int n);
double MaclaurinSin(x,i);
double maclaurinCos(x,i);

int main(void)
{
    int sinvar,cosvar;
    printf("sin(x)とcos(x)をマクローリン展開で求めます。xを弧度法で入力してください。\n");
    printf("sin(x)のx=");
    scanf("%d"sinvar);
    printf("cos(x)のx=");
    scanf("%d"cosvar);
    printf("sin(%d)の値は %f です。\n",sinvar,MaclaurinSin(sinvar*DEG_RAD,20));
    printf("cos(%d)の値は %f です。\n",cosvar,maclaurinCos(cosvar*DEG_RAD,20));
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

double MaclaurinSin(x,i)
{
    double Sin
    if(i==0)
    {
        return 1;
    }
    else
    {
        Sin=pow(x,2i+1)/factorial(2i+1);
        Sin+=MaclaurinSin(x,i-1);
    }
    return Sin;
}

double maclaurinCos(x,i)
{
    double Cos
    if(i==0)
    {
        return 1;
    }
    else
    {
        Cos=pow(x,2i)/factorial(2i);
        Cos+=maclaurinCos(x,i-1)
    }
}