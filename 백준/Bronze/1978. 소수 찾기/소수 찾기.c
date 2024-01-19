#include<stdio.h>

int main(){
    int n, flag;
    int count = 0;
    
    scanf("%d", &n);
    
    int num;
    
    for(int i = 0; i < n; i++){
        flag = 0;
        scanf("%d", &num);
        
        
        for(int k = 2; k<num; k++){
            if(num % k == 0)
                flag = 1;
        }
        if(flag == 0 && num != 1){
            count = count + 1;
        }
    }
    printf("%d", count);
    
    return 0;
}