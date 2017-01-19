#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[10][21];
    char temp[21];
    int i;
    int flag=1;

    printf("aaaa\n");
    for(i=0;i<10;i++)
    {
        scanf("%20s",&str[i][0]);
    }
    printf("bbbbb\n");

    while(flag==1)
    {
        flag=0;
        for(i=0;i<9;i++)
        {
            if(strcmp(&str[i][0],&str[i+1][0])>0)
            {
                strcpy(temp,&str[i][0]);
                strcpy(&str[i][0],&str[i+1][0]);
                strcpy(&str[i+1][0],temp);
                flag=1;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%s\n",str[i]);
    }

    return 0;
}