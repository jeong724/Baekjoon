#include<stdio.h>

int main(){
    char str[1000000];
    int i = 0;
    
    scanf("%s", str);
    int count[1000000] = {0};
    int num = 0;
    int result=0;
    int max = 0;
    
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        count[str[i] - 'A']++;

        i++;
    }
    i=0;
    while(i<26){
        if(max <= count[i])
            max=count[i];
        i++;
    }
    i=0;
    
    while(i<26){
        if(max==count[i]){
            num++;
            result=i;
        }
        i++;
    }
    if(num > 1)
        printf("?");
    else
        printf("%c", 'A'+result);
    
    return 0;
}