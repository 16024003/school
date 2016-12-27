#include<stdio.h>

int main(void)
{
    double x =3.14;
    double *p;

    p=&x;

    printf("変数xのアドレスは%pです。\n",p);
    printf("変数xの中身は%fです\n",*p);

    x=2.7;


    printf("変数xの中身は%pです。\n",p);
    printf("変数xの中身は%fです。\n",*p);

    return 0;
}