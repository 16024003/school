#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[11];
    int i;

    printf("10文字以内の文字を入力してください\n--->");
    scanf("%s",str);
    printf("逆順に出力すると\n");

    for(i = strlen(str)-1;i >= 0; i--)
    {
        printf("%c",str[i]);
    }

    printf("となります\n");

    return 0;

}