#include<stdio.h>

int main(){
    int num1, num2;
    num1 = 1;
    num2 = 1;
    
    while(1){
        scanf("%d %d", &num1, &num2);
        
        if(num1 ==0 || num2 == 0){
            break;
        }
        if(num1 % num2 == 0){
            printf("multiple");
            printf("\n");
        }
            
        else if(num2 % num1 == 0){
            printf("factor");
            printf("\n");
        }
        else{
            printf("neither");
            printf("\n");
    }
    }
    
    return 0;
}