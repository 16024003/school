#include<stdio.h>

struct phone_book
{
    char name[31];
    char secname[31];
    char maile[31];
    char phone[14];
}a[10];


int main(void)
{
    int i;
    printf("アドレス帳を開きます。名前(半角30文字)メールアドレス(半角30文字)電話番号(半角13文字)を入力してください。\n");
    for(i=0;i<10;i++)
    {
        printf("%d人目　名前(半角30文字)を入力。姓と名はスペースで区切ってください。",i+1);
        scanf("%30s",a[i].name);
        scanf("%30s",a[i].secname);
        printf("%sのメールアドレス(半角30文字)を入力。",a[i].name);
        scanf("%30s",a[i].maile);
        printf("%sの電話番号(半角13文字)を入力。",a[i].name);
        scanf("%13s",a[i].phone);
    }
    for(i=0;i<10;i++)
    {
        printf("%s ",a[i].name);
        printf("%s ",a[i].secname);
        printf("%s ",a[i].maile);
        printf("%s\n",a[i].phone);

    }
    return 0;
}
