#include<stdio.h>
#include<string.h>

int main(){
    char str[1000000];
    
    scanf("%[^\n]s", str);
    
    int count = 0;
    int i = 0;
    int num;
    num = strlen(str);
    while(str[i]){
        if (str[i] == ' '){
            count = count + 1;
        }
        i++;
    }
    if(str[0] == ' ')
        count = count - 1;
    if (str[num -1] == ' ')
        count = count - 1;
    printf("%d", count+1);
    
    return 0;
}