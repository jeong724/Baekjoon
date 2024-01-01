#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s", str);
    int flag = 1;
    int count;
    int i =0;
    
    count = strlen(str);
    
    while(str[i]){
        if(str[i] != str[count-1-i]){
            flag=0;
            break;
        }
            i++;
    }
        
       
    if(flag == 1)
        printf("1");
    else
        printf("0");
    
    return 0;
}