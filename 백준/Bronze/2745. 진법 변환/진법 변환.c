#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char str[1000];
    int len, k, num;
    int i = 0;
    int result = 0;
    
    scanf("%s %d", str, &n);
    
    len = strlen(str);
    
    while (str[i]){
        k = i;
        if(str[i]>= 'A' && str[i]<='Z'){
            num = str[i]-'A'+10;
        }
        if(str[i]>='0' && str[i]<= '9')
            num = str[i]-'0';
        while(len-k-1>0){
            num = num * n;
            k++;
        }
        result = result + num;
        i++;
    }
    printf("%d", result);
    
    return 0;
}