#include <stdio.h>
int sum(int x,int y);
int product(int f,int g);

int main(void)
{
    int a,b;
    int result;

    printf("整数を２つ入力してください--->");
    scanf("%d %d",&a,&b);
    result=sum(a,b);
    printf("%dと%dを足すと%dになります。\n",a,b,result);
    result=product(a,b);
    printf("%dと%dをかけると%dになります。\n",a,b,result);

    return 0;
}

int sum(int x,int y)
{
    int z;

    z=x+y;
    return z;
}

int product(int f,int g)
{
    int h;

    h=f*g;
    return h;
}