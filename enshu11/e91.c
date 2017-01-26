#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[30];
    int flag=0;

    while(flag==0)
    {
        printf("you: ");
        scanf("%s",str);
        printf("bot: %s\n",str);
        if(strcmp("ばいばい",str)==0 || strcmp("じゃあね",str)==0 || strcmp("おわり",str)==0)
        {
            flag=1;
        }
    }

    return 0;
}