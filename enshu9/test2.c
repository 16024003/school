#include <stdio.h>
int main(void)
{
int a[] = {1,2,3};
int *ary_p;
ary_p=a;


printf("間接参照\t=%d,%d,%d\n",*ary_p,*(ary_p+1),*(ary_p+2));
printf("添字指定\t=%d,%d,%d\n",a[0],a[1],a[2]);
return 0;
}