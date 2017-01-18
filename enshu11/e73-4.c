#include<stdio.h>

int main(void)
{
    int i,a[10],flag=1,temp;

    printf("入力された数字をソートします。10個数字を入力してください。\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",a+i);
    }

    while(flag==1)
    {
        flag=0;
        for(i=0;i<9;i++)
        {
            if(*(a+i)>*(a+(i+1)))
            {
                temp=*(a+i);
                *(a+i)=*(a+(i+1));
                *(a+(i+1))=temp;

                flag=1;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");

    return 0;
}