#include <stdio.h>
int product(int n,int m);

int main(void)
{
    int f1[3],f2[3],i,delta;
    double x,y;

    printf("2つの方程式を入力してください\nax+by=h ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&f1[i]);
    }
    printf("cx+dy=k ");
        for(i=0;i<3;i++)
    {
        scanf("%d",&f2[i]);
    }

    delta=product(f1[0],f2[1])-product(f1[1],f2[0]);

    if(delta==0)
    {
        printf("ERRAR!ad-bc=0になる連立方程式です\n");
    }
    else 
    {
        x=(product(f1[2],f2[1])-product(f1[1],f2[2]))/delta;
        y=(product(f1[0],f2[2])-product(f1[2],f2[0]))/delta;
        printf("xの値は%f,yの値は%fです。\n",x,y);
    }
    return 0;
}


int product(int n,int m)
{
    int h;

    h=n*m;
    return h;
}