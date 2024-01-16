#include<stdio.h>

int main(){
    int x, k;
    int i = 1;
    scanf("%d", &x);
    k = x;
    
    while(1){
        k = k - i;
        if(k <= 0){
            break;
        }
        i++;
    }
    k=k+i;
    if(i % 2 == 0){
        printf("%d/%d", k,i-k+1);
    }
    else{
        printf("%d/%d",i-k+1,k);
    }
    return 0;
}