#include<stdio.h>

int main(){
    int num;
    char arr1[1000],hide;
    scanf("%d", &num);

    for(int a=0;a<num;a++){
        //scanf("%s\n %c", arr1, &hide);
        scanf("%s", arr1);
        scanf(" %c", &hide);
        int i,j;
        for(i=0,j=0;arr1[i]!='\0';i++){
            if(arr1[i] != hide){
                arr1[j++]=arr1[i];
            }
        }
        arr1[j] = '\0'; //直接終止 後面不要補進去

        printf("%s\n", arr1);
    }
    
    return 0;
}
