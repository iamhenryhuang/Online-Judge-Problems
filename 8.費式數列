#include<stdio.h>

int sequence(int a);

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        int which;
        scanf("%d", &which);
        printf("%d\n", sequence(which)); 
    }

    return 0;
}

int sequence(int a){
    int first=1, second=1, next=0;

    if (a<2){
        return 1;
    }
    else{
        for (int i=2;i<=a;i++){
            next=first+second;  //遞迴觀念 多設一個變數作為暫存
            first=second;
            second=next;
        }
        return next;
    }
}
