#include<stdio.h>
#include<string.h>

int main(){
    int i = 0;
    int n, rest, len;
    long long num;
    char str[1000];
    scanf("%lld %d", &num, &n);
    
    while(num != 0){
        rest = num % n;
        if (rest >= 10){
            str[i] = rest - 10 + 'A';
        }
        else
            str[i] = rest + '0';
        num = num / n;
        i++;
    }
    i = 0;
    len = strlen(str);
    while(str[i]){
        printf("%c", str[len-1-i]);
        i++;
    }
    
    return 0;
}