#include <stdio.h>
int main(void)
{
    char str[11];
    int i;

    printf("１０文字以内の文字列を入力してください--->");
    scanf("%s",str);

    while(str[i] !='\0')
    {
        i++ ;
    }

    printf("入力された文字列の長さは%d文字です\n",i);

    return 0;
}