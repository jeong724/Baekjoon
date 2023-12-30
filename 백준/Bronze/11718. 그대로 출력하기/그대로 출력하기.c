#include<stdio.h>

int main(){
    char str[100];
    int i = 0;
    
    while (i < 100){
        if(scanf(" %[^\n]s", str) == EOF)
            break;
        printf("%s\n", str);
        i++;
    }
    return 0;
}