#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    printf("%d ", num);
    
    while(num!=1){
        if(num==1){
        return 0;
        }
        else{
            if(num%2==1){
                num=num*3+1;
                printf("%d ", num);
            }
            else{
                num=num/2;
                printf("%d ", num);
            }
        }
    }

    return 0;
}
