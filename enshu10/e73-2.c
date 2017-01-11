#include<stdio.h>

int main(void)
{
    int i,tmp,flag=1;
    int a[9] ={2,1,7,3,6,4,8,5,9};
    int *p=a;
    while(flag == 1)
    {
        flag=0;
        for(i=0;i<8;i++)
        {
            if(*(p+i)<*(p+(i+1)))
            {
                tmp = *(p+i);
                *(p+i) = *(p+(i+1));
                *(p+(i+1)) = tmp;
                flag=1;
            }
        }
    }
    for(i=0;i<=8;i++)
    {
        printf("%d",*(p+i));
    }
    printf("\n");

    return 0;
}
