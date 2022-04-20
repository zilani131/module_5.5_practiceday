#include<stdio.h>
int main()
{
    int sum =0;
    for (int i = 1; i <= 29; i+=2)
    {
       sum=sum+i;
    }
    printf("sum is %d ",sum);
    return 0;
}