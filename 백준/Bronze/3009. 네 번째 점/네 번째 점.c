#include<stdio.h>

int main(){
    int width[4];
    int height[4];
    int width1 = 0;
    
    scanf("%d %d", &width[0], &height[0]);
    scanf("%d %d", &width[1], &height[1]);
    scanf("%d %d",&width[2], &height[2]);
    
    if(width[0] == width[1]){
        width[3] = width[2];
    }
    else if(width[0] == width[2]){
            width[3] = width[1];

    }
    else {
        width[3] = width[0];
    }
    if(height[0] == height[1]){
        height[3] = height[2];
    }
    else if(height[0] == height[2]){
            height[3] = height[1];

    }
    else {
        height[3] = height[0];
    }
    printf("%d %d", width[3], height[3]);
    
    return 0;
    
}