#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    
    scanf("%s", str);
    
    int i = 0;
    int len;
    int num = 0;
    len = strlen(str);
    while(str[i]){
        if(str[i] == 'c'){
            if(str[i+1]=='=')
                num++;
            if(str[i+1]=='-')
                num++;
        }
        if(str[i] == 'd'){
            if(str[i+1]=='z' && str[i+2] == '=')
                num=num+1;
            if(str[i+1]=='-')
                num++;
        }
        if(str[i] == 'l'){
            if(str[i+1]=='j')
                num++;
        }
        if(str[i] == 'n'){
            if(str[i+1]=='j')
                num++;
        }
        if(str[i] == 's'){
            if(str[i+1]=='=')
                num++;
        }
        if(str[i] == 'z'){
            if(str[i+1]=='=')
                num++;
        }
        i++;
    }
    len = len-num;
    printf("%d", len);
    
    return 0;
}