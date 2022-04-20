#include <stdio.h>
int main()
{
    int i;
    printf("Enter your number: ");
    scanf("%d",&i);
    if (i>=80)
    {
        printf("A+",i);
    }
    else if (i<80&&70<=i)
    {
        printf("A");
    }
    else if (i<70&&60<=i)
    {
        printf("B");
    }
    else if (i<60&&50<=i)
    {
        printf("C");
    }
    else if (i<50&&40<=i)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

    return 0;
}