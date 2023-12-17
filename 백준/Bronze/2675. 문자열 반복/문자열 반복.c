#include<stdio.h>
#include<string.h>

int main(){
    int T = 0;
    scanf("%d", &T);
    int R = 0;
    char str[21];
    
    for(int i = 0; i < T ; i++){
        scanf("%d %s", &R, str);
        for(int k = 0;k < strlen(str) ; k++){
            for(int j = 0 ; j < R ; j++){
                printf("%c", str[k]);
            }
        }
        printf("\n");
    }
    return 0;
}