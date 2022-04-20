#include<stdio.h>
int main()
{
    int sum =0,n=10;
    for (int i = 2; i <= (2+(n-1)*3); i+=3)
    {
       sum=sum+i;
    }
    printf("sum is %d ",sum);
    return 0;
}