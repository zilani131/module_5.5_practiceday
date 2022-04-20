#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("enter : ");
    scanf("%d %c %d", &a, &op, &b);
    if (op == '+')
    {
        printf("%d %c %d=%d\n", a, op, b, a + b);
    }
    else if (op == '-')
    {
        printf("%d %c %d=%d\n", a, op, b, a-b);
    }

    else if (op == '*')
    {
        printf("%d %c %d=%d", a,op,b,a* b);
    }

    else if (op == '/'|| op == '%')
    {
        if (b==0)
        {
            printf("can not divided by 0");
        }
        else if (op == '/')
        {
            printf("%d %c %d=%d", a, op, b, a/b);
        }
        else if (op == '%')
        {
            printf("%d %c %d=%d", a, op, b, a%b);
        }
    }
    return 0;
}