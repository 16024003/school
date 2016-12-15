#include<stdio.h>
double power(int n);

int main(void)
{
    int n;
    double pop;
    printf("１９９４年からn年後の人口を予想します。nを入力してください　");
    scanf("%d",&n);
    pop=567*power(n);
    printf("%d年の人口予想は%f千万人です。\n",1994+n,pop);

    return 0;
}

double power(int n)
{
    double popmag;
    if(n==0)
    {
        return 1;
    }
    else
    {
        popmag=power(n-1)*1.016;
    }
    return popmag;
}
