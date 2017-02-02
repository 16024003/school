#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int GetRandom(int min,int max);

int main(void)
{
    char str[30];
    char reword[5][100];
    int flag=0;
    int i=0;
    FILE *fp;

    fp=fopen("random.txt","r");
    while(fgets(reword[i],90,fp)!=NULL)
    {
        i++;
    }

    while(flag==0)
    {
        printf("you: ");
        scanf("%s",str);
        printf("bot: %s\n",reword[GetRandom(0,4)]);
        if(strcmp("ばいばい",str)==0 || strcmp("じゃあね",str)==0 || strcmp("おわり",str)==0)
        {
            flag=1;
        }
    }

    return 0;
}

int GetRandom(int min,int max)
{
    return min+rand()%(max-min+1);
}