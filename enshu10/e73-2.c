#include<stdio.h>
#include<stdlib.h>      /*mallocの利用*/
void swapi(int *x,int *y);

int main(void)
{
    int *a,*b;
    a = (int *)malloc(sizeof(int)*1);   /*メモリ領域の確保*/
    b = (int *)malloc(sizeof(int)*1);
    *a=5,*b=10;                         /*aとbへの代入*/
    printf("x=%d y=%d\n",*a,*b);
    swapi(a,b);

    return 0;

}

void swapi(int *x,int *y)
{
    int temp;
    temp=*x;                            /*tempへ一時的に格納*/
    *x=*y;
    *y=temp;

    printf("x=%d y=%d\n",*x,*y);        /*そのままprintfを返す*/
}