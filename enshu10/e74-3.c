#include<stdio.h>

void init_val(double a[],int n);

int main(void)
{
    double a[6],*p;
    int n,i;

    n=sizeof(a)/sizeof(double);
    printf("配列の要素の数は%dです。",n);
    init_val(a,n);
    printf("配列の要素の数は%dです。",n);
    printf("各配列要素の中身は次のとおりです。/n");
    for(i=0;i<n;i++)
    {
        p=&a[i];
        printf("a[%d]=%f   アドレスは%pです。",i,a[i],p);
    }

    return 0;
}

void init_val(double a[],int n)
{
    if(n=0)
    {
        a[n]=0;
    }
    else
    {
        a[n]=n*0.123;
        init_val(a,n-1);
    }
}