 #include<stdio.h>

int main(){
    int n, m;
    int num1[100][100];
    int num2[100][100];
        
    scanf("%d %d",&n, &m);
    
    for(int i =0; i<n; i++){
        for(int j=0; j<m;j++){
            scanf("%d",&num1[i][j]);
        }
    }
    
    for(int i =0; i<n; i++){
        for(int j=0; j<m;j++){
            scanf("%d",&num2[i][j]);
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            printf("%d ", num1[i][j]+num2[i][j]);
        }
        printf("\n");
    }
    return 0;
}