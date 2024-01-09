#include<stdio.h>
#include<string.h>

int main(){
    int max;
    char str[5][16];
    
    for(int i = 0; i < 5; i++){
        for(int j=0;j<16; j++)
            str[i][j]='\0';
    }
    
    for(int i = 0; i<5; i++){
        scanf("%s", str[i]);
    }
    max = strlen(str[0]);
    for(int i = 0; i<5; i++){
        if(max < strlen(str[i]))
            max = strlen(str[i]);
    }
    for(int j = 0; j < max; j++){
        for(int i = 0; i < 5; i++){
            if(str[i][j]=='\0')
                continue;
            printf("%c", str[i][j]);
        }
    }
    return 0;
}