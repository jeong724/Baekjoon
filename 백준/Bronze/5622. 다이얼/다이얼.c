#include<stdio.h>

int main(){
    char str[15];
    int i = 0;
    int result = 0;
    scanf("%s", str);
    
    while (str[i]){
        if(str[i] < 68)
            result = result + 3;
        else if(str[i] < 71)
            result = result + 4;
        else if(str[i] < 74)
            result = result + 5;
        else if(str[i] < 77)
            result = result + 6;
        else if(str[i] < 80)
            result = result + 7;
        else if(str[i] < 84)
            result = result + 8;
        else if(str[i] < 87)
            result = result + 9;
        else
            result = result + 10;
        i++;
    }
    printf("%d", result);
    
    return 0;
}