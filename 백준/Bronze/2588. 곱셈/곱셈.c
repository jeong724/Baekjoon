#include<stdio.h>

int main(){
    int a, b, b1;
    int num1, num2, num3;
    
    scanf("%d\n %d\n", &a, &b);
    num1 = b % 10;
    b1 = b / 10;
    num2 = b1 % 10;
    b1 = b1 / 10;
    num3 = b1 % 10;
    printf("%d\n", a*num1);
    printf("%d\n", a*num2);
    printf("%d\n", a*num3);
    printf("%d\n", a*b);

    return 0;
}