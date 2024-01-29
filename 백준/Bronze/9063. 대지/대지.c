#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int weight[100000];
    int height[100000];
    long realweight = 0;
    long realheight = 0;
    
    if(n == 1){
        printf("%d", 0);
        return 0;
    }
    
   
    
    for(int i = 0; i < n; i++)
        scanf("%d %d", &weight[i], &height[i]);
    
    int minweight = weight[0];
    int minheight = height[0];
    int maxweight = weight[0];
    int maxheight = height[0];
    
    for(int i= 0; i<n;i++){
        if(minweight > weight[i])
            minweight = weight[i];
        if(minheight > height[i])
            minheight = height[i];
        if(maxweight < weight[i])
            maxweight = weight[i];
        if(maxheight < height[i])
            maxheight = height[i];
        
    }
   
    realweight = maxweight - minweight;
    realheight = maxheight - minheight;
    
    printf("%ld", realweight * realheight);
    return 0;
}