#include<stdio.h>

int main(){
    int num[9][9];
    
    for(int i = 0; i<9;i++){
        for(int j=0; j<9;j++){
            scanf("%d", &num[i][j]);
        }
    }
    int max = num[0][0];
    int x, y;
    x = 0;
    y=0;
    
    for(int i = 0; i<9; i++){
        for(int j=0; j<9; j++){
            if(max < num[i][j]){
                max = num[i][j];
                x = i;
                y = j;
            }
        }
    }
    
    printf("%d\n", max);
    printf("%d %d", x+1, y+1);
    
    return 0;
}