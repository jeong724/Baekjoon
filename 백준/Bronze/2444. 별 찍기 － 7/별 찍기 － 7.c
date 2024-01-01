#include<stdio.h>

int main(){
    int n;
    int k = 0;
    int j = 0;
    
    scanf("%d", &n);
    int t = n-1;
    
    for(int i=0; i < n; i++){
        while(k < n-i-1){
            printf(" ");
            k++;
        }
        while(j<2*i+1){
            printf("*");
            j++;
        }
        printf("\n");
        k=0;
        j=0;
    }
    k=0;
    j=0;
    for(int i=1; i<n; i++){
        while(k < i){
            printf(" ");
            k++;
        }
        while(j<2*t-1){
            printf("*");
            j++;
        }
        printf("\n");
        t--;
        k=0;
        j=0;
    }
    return 0;
}