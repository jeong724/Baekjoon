#include<stdio.h>

int main(){
    
    int n;
    long result, num;
    scanf("%d", &n);
    num = 1;
    result = 3;
    
    for(int i = 0; i<n-1; i++){
        num = num*2;
        result = result + num;
           
    }
    result = result * result;
    printf("%ld", result);
    
    return 0;
}