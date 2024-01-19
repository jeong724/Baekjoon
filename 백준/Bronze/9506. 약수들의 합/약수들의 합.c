 #include<stdio.h>

int main(){
    
    int n, num, k;
    num = 0;
    k = 0;
    int number[100000];
    
    while(1){
        scanf("%d", &n);
        if(n == -1)
            break;
        for(int i = 1; i < n; i++){
            if(n % i == 0){
                num = num + i;
                number[k] = i;
                k++;
            }
        }
        if (num == n){
            printf("%d =", n);
            for(int i = 0; i < k; i++){
                printf(" %d ", number[i]);
                if(i != k-1)
                    printf("+");
            }
        }
        else
            printf("%d is NOT perfect.", n);
        printf("\n");
        k = 0;
        num = 0;
    }
    return 0;
}