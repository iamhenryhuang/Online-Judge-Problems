#include<stdio.h>

int main(){
    int total;
    scanf("%d", &total);
    int score[total];
    for(int i=0;i<total;i++){
        scanf("%d", &score[i]);
    }
    
    int changetime;
    scanf("%d", &changetime);
    int position[changetime][2];
    
    for(int i=0;i<changetime;i++){
        for(int j=0;j<2;j++){
            scanf("%d", &position[i][j]);
        }
    }
    
    for(int k=0;k<changetime;k++){
        int flag=score[position[k][0]-1];
        score[position[k][0]-1]=score[position[k][1]-1];
        score[position[k][1]-1]=flag;
    }

    for(int i=0;i<total;i++){
        printf("%d ", score[i]);
    }

    return 0;  
}
