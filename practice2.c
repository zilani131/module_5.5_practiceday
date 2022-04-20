#include<stdio.h>

int main(){
    int A=5,B=6,C=10;
    printf("%d\n",A<5); //0
    printf("%d\n",A+B==11); //1
    printf("%d\n",(A*C)%5==0); //1
    printf("%d\n",A>=B); //0
    printf("%d\n",!(A>B)); //1
    printf("%d\n",(A<B) && (B<C)); //1
    printf("%d\n",(A<B) || (B<C)); //1
    printf("%d\n",(A>B) && (B<C)); //0
    printf("%d\n",!(A%5==0 && B%5==0)); //1
    printf("%d\n",(A>=B) || (B<C)); //1
    printf("%d\n",((A<B && B%4==0) || (C%5==0))); //1

    return 0;
}