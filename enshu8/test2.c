#include<stdio.h>
void display(int x, int y);
void swap(int x, int y);
 
void main(){
int a=2, b=1;
    display(a,b);
    swap(a,b);
    display(a,b);    }
 
void display(int x,int y){
    printf("a=%d b=%d\n",x,y);    }
 
void swap(int a,int b){
    int c;
    c=a; a=b; b=c;
    display(a,b);    }
    