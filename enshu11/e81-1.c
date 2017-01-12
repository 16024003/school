#include<stdio.h>

struct phone_book
{
    char name[30];
    char maile[30];
    int phone[13];
}a[10];

int main(void)
{
    int i;
    printf("アドレス帳を開きます。名前(半角30文字)メールアドレス(半角30文字)電話番号(半角13文字)を入力してください。");
    for(i=0;i<10;i++)
    {
        printf("名前(半角30文字)を入力。姓と名はスペースで区切ってください。");
        scanf("%30s",a[i].name);
        printf("%sのメールアドレス(半角30文字)を入力。",a[i].name);
        scanf("%30s",a[i].maile);
        printf("%sの電話番号(半角13文字)を入力。",a[i].name);
        scanf("%d",a[i].phone);
    }
    for(i=0;i<10;i++)
    {
        printf("%s %s ",a[i].name,a[i].maile);
        for(i=0;i<13;i++)
        {
            printf("%d")
        }
    }
    return 0;
}
