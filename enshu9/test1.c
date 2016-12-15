#include <stdio.h>
void main()
{
    int data[10];
    printf("dataのアドレス=%p\n",&data);
    printf("data[0]のアドレス=%p\n",&data[0]);
    printf("data[1]のアドレス=%p\n",&data[1]);
}
