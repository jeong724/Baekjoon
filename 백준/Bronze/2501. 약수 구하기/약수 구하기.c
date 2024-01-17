#include<stdio.h>

int main(){
    int p, q;
    int count = 0;
    
    scanf("%d %d", &p, &q);
    
    for(int i = 1; i<=p; i++){
        if(p % i == 0){
            count++;
            if(count == q){
                printf("%d", i);
            }
        }
    
    }
    if(count < q){
        printf("0");
    }
    return 0;
}