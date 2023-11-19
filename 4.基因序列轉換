#include <stdio.h>
#include <string.h>

int main(void) 
{
    char DNA[1000];  
    char RNA[1000];  
    scanf("%s", DNA);
    
    int i;
    for (i=0; DNA[i] != '\0'; i++) 
    {
        switch (DNA[i])
        {
          case 'A':
              RNA[i]='U';
              break;
          case 'T':
              RNA[i]='A';
              break;
          case 'C':
              RNA[i]='G';
              break;
          case 'G':
              RNA[i]='C';
              break;
          default:
              break;
        }
    }
    RNA[i] = '\0';

    printf("%s\n", RNA);
    
    return 0;
}
