#include <stdio.h>
int Delta(int a,int b,int c,int d);

int main(void)
{
    int f1[3],f2[3],i;
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

    if(Delta(f1[0],f1[1],f2[0],f2[1])==0)
    {
        printf("ERROR!ad-bc=0になる連立方程式です\n");
    }
    else 
    {
        x=(f1[2]*f2[1]-f1[1]*f2[2])/Delta(f1[0],f1[1],f2[0],f2[1]);
        y=(f1[0]*f2[2]-f1[2]*f2[0])/Delta(f1[0],f1[1],f2[0],f2[1]);
        printf("xの値は%f,yの値は%fです。\n",x,y);
    }
    return 0;
}

int Delta(int a,int b,int c,int d)
{
    int delta;

    delta=a*d-b*c;
    return delta;
}

