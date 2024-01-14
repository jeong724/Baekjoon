#include<stdio.h>

int main(){
    int n, result[1000][4], num[1000];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        
        result[i][0] = num[i]/25;
        num[i] = num[i] % 25;
        result[i][1] = num[i]/10;
        num[i] = num[i] % 10;
        result[i][2] = num[i]/5;
        num[i] = num[i] % 5;
        result[i][3] = num[i];
    }
    
    for(int i = 0; i<n ;i++){
        printf("%d %d %d %d\n", result[i][0], result[i][1], result[i][2], result[i][3]);
    }
    
    return 0;
}