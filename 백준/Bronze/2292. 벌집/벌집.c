#include<stdio.h>

int main(){

    int n;
    int i =1;
    int k = 6;
    
    scanf("%d", &n);
    n=n+4;
    while(1){
        
        k = k+6*(i-1);
        if(n < k){
            break;
        }
        i++;
    }
    

    
    
    printf("%d" ,i);
    
    return 0;
}

    