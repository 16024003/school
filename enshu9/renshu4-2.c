#include <stdio.h>
int product(int n,int m);

int main(void)
{
    int *f1[3],*f2[3],i,delta;
    double x,y;

    printf("2つの方程式を入力してください\nax+by=h ");
    for(i=0;i<3;i++)
    {
        scanf("%d",f1[i]);
    }
    printf("cx+dy=k ");
        for(i=0;i<3;i++)
    {
        scanf("%d",f2[i]);
    }

    delta=f1[0]*f2[1]-f1[1]*f2[0];

    if(delta==0)
    {
        printf("ERROR!ad-bc=0になる連立方程式です\n");
    }
    else 
    {
        x=(f1[2]*f2[1]-f1[1]*f2[2])/delta;
        y=(f1[0]*f2[2]-f1[2]*f2[0])/delta;
        printf("xの値は%f,yの値は%fです。\n",x,y);
    }
    return 0;
}

int Delta