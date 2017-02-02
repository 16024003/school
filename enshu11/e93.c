#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void fileRead(void);
void fileWrite(void);
void repeat(char *input, char *output);
void randomReply(char *input, char *output);
void teaching(char *input, char *output);
int GetRandom(int min,int max);

int count = 0;

char reply[10][100];

int main(void)
{
    fileRead();

    char input[30];
    char output[30];
    int Probability;

    while(1)
    {
        printf("you: ");
        fgets(input,28,stdin);
        printf("bot: ");
        if(strcmp("ばいばい\n",input)==0 || strcmp("じゃあね\n",input)==0 || strcmp("おわり\n",input)==0)
        {
            printf("%s\n",output);
            break;
        }
        Probability=GetRandom(1,9);
        if( Probability<=1)
        {
            repeat(input, output);
        }
        if(Probability>1 && Probability<=4)
        {
            randomReply(input, output);
        }
        if(Probability>4 && Probability<=10)
        {
            if(count == 5)
            {
                printf("もうおぼえれないよ。ばいばい。\n");
                fileWrite();
                break;
            }
            else
            {
                teaching(input, output);
            }
        }

        printf("%s\n", output);
    }


    return 0;
}

void fileRead(void)
{
    int i=0;
    FILE *fp;
    fp=fopen("random.txt","r");
    while(fgets(reply[i],98,fp)!=NULL)
    {
        i++;
    }
    fclose(fp);
}

void fileWrite(void)
{
    int i;
    FILE *fp;
    fp=fopen("random.txt","w");
    for(i = 0; i < 10; i++)
    {
        fputs(reply[i], fp);
    }
    fclose(fp);
}

void repeat(char *input, char *output)
{
    strcpy(output, input);
}

void randomReply(char *input, char *output)
{
    strcpy(output, reply[GetRandom(0,9)]);
}

void teaching(char *input, char *output)
{
    int i;
    for(i = 0; i < 10; i++)
    {
        if(strcmp(reply[i], input) == 0)
        {
            strcpy(output, "もう知ってるよ。\n");
            return;
        }
    }
    strcpy(reply[count], input);
    strcpy(output, "覚えたよ。\n");
    count++;
}

int GetRandom(int min,int max)
{
    return min+rand()%(max-min+1);
}