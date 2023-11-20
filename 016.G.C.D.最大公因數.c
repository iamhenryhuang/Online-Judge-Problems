#include<stdio.h>

int gcd(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGCD(int arr[], int n){
    int result=arr[0];

    for(int i=0;i<n;i++){
        result = gcd(result, arr[i]);
    }
    return result;
}

int main(){
    int total;
    scanf("%d", &total);
    for(int i=0;i<total;i++){
        int times;
        scanf("%d", &times);
        int num[times];
        
        for(int j=0;j<times;j++){
            scanf("%d", &num[j]);
        }
        
        int result_gcd = findGCD(num, times);

        printf("%d\n", result_gcd);
    }

    return 0;
}
