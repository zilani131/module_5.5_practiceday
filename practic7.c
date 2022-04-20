#include<stdio.h>
int main(){
    int a, b;
    printf("Enter numbers: ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d is large number",a);
    }
    else{
          printf("%d is large number",b);
    }
    return 0;
}