#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    char str[N];
    
    int i = 0;
    int result = 0;
    int num = 0;
    scanf("%s", str);
    while(i<N){
        num = str[i] -'0';
        result = result + num;
        i++;
    }
    printf("%d", result);
    return 0;
}