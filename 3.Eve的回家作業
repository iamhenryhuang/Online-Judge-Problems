#include <stdio.h>

int main(void)
{
    int total;
    scanf("%d", &total);

    for (int i=0;i<total;i++)
    {
        int num[4];
        scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]); 
        
		if(num[1]-num[0]==num[2]-num[1])
			printf("%d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[3]+(num[2]-num[1]));	
        else if(num[1]/num[0]==num[2]/num[1])
        	printf("%d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[3]*(num[2]/num[1]));
    }

    return 0;
}
