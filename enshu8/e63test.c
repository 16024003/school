#include <stdio.h>
void swap(int x, int y);

main (void){
    int n,i,j,flag=1;
    printf("入力する数字の個数を入力してください");
    scanf("%d",&n);
    int m[n];
    printf("数字を入力してください");
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);
    }

    while(flag>0){
        flag=0;
        for(i=0;i<n-1;i++){
            if(m[i]>m[i+1]){
                swap(m[i],m[i+1]);
                flag++;
            }
        }
    }
    printf("小さい順に並べると ");
    for(i=0;i<n;i++){
        printf("%d ",m[i]);
    }
    printf("です\n");

    return 0;
}

void swap(int x, int y){
    int temp;
    
    temp=x;
    x=y;
    y=temp;

}