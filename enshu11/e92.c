#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int GetRandom(int min,int max);

int main(void)
{
    char str[30];
    char reword[5][10];
    char word[10];
    int flag=0;
    int i=0;
    FILE *fp;

    fp=fopen("random.txt","r");
    while(fgets(word,10,fp)!=NULL)
    {
        reword[i][10]=word[10];
        i++;
    }

    while(flag==0)
    {
        printf("you: ");
        scanf("%s",str);
        printf("bot: %s\n",reword[GetRandom(0,i)]);
        if(strcmp("ばいばい",str)==0 || strcmp("じゃあね",str)==0 || strcmp("おわり",str)==0)
        {
            flag=1;
        }
    }

    return 0;
}

int GetRandom(int min,int max)
{
    return min+(int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}