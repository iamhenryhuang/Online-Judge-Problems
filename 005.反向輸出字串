#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[1000];
    char restr1[1000];
    int totalnum;
    
    scanf("%d", &totalnum);
    for(int i=0;i<totalnum;i++)
    {
        scanf("%s", str1);
        
        int length=strlen(str1);
        
        for(int j=0;j<length;j++)
        {
            restr1[j]=str1[length-j-1];
        }

        restr1[length]='\0';

        printf("%s", restr1);
        printf("\n");
    }

    return 0;
}
