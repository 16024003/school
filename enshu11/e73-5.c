#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[10][20];
    char temp;
    int i;
    int flag=1;

    printf("");
    for(i=0;i<10;i++)
    {
        scanf("%20s",str+i);
    }

    while(flag==1)
    {
        flag=0;
        for(i=0;i<9;i++)
        {
            if(strc(*(str+i),*(str+(i+1))))
            {
                strcpy(temp,*(str+i));
                strcpy(*(str+i),*(str+(i+1)));
                strcpy(*(str+(i+1)),temp);
                flag=1;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%s\n",str+i);
    }

    return 0;
}