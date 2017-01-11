#include<stdio.h>
#include<stdlib.h>
void swaps(char *a,char *b);

int main(void)
{
    char *a,*b;    
    a = (char *)malloc(sizeof(char)*1);   /*メモリ領域の確保*/
    b = (char *)malloc(sizeof(char)*1);
    *a='A',*b='B';
    printf("a=%c b=%c\n",*a,*b);
    swaps(a,b);

    return 0;
}

void swaps(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;

    printf("a=%c b=%c\n",*a,*b);
}