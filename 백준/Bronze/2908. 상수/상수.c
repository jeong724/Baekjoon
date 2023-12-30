#include<stdio.h>

int main(){
    char num[7];
    scanf("%[^\n]s", num);
    char num1[3];
    char num2[3];
    int flag = 0;
    
    for (int i = 0; i < 3; i++) {
        num1[i] = num[i];
        num2[i] = num[i + 4];
    }
    
    for(int i = 2; i > -1 ; i--){
        if(num1[i] > num2[i])
            flag = 1;
        if (num1[i] < num2[i])
            flag = 2;
        if(flag != 0)
            break;
    }
    if (flag == 1)
        printf("%c%c%c", num1[2],num1[1],num1[0]);
    else
        printf("%c%c%c", num2[2],num2[1],num2[0]);
    return 0;
}
