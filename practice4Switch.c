#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("enter:");
    scanf("%d%c%d", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("%d %c %d=%d\n", a, op, b, a + b);
        break;

    case '-':
        printf("%d %c %d=%d\n", a, op, b, a - b);
        break;

    case '*':
        printf("%d %c %d=%d\n", a, op, b, a * b);
        break;

    case '/':
        (b != 0)? printf("%d %c %d=%d\n", a, op, b, a / b) : printf("can not divided by 0");
        break;

    case '%':
        (b != 0)? printf("%d %c %d=%d\n", a, op, b, a % b) : printf("can not divided by 0");
        break;

    default:
        printf("the operator is not recognized") ;
        break;
    }
}