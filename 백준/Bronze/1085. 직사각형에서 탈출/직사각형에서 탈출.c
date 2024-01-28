#include<stdio.h>

int main(){
    int a, b, c, d;
    int num[4];
    int min;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    num[2] = c - a;
    num[3] = d - b;
    num[0]=a;
    num[1]=b;
    min=num[0];
    for (int i = 0; i<4; i++){
        if(min > num[i])
            min=num[i];
    }
    printf("%d", min);
    
    return 0;
}