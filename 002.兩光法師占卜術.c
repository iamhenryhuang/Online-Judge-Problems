#include<stdio.h>

int main(void)
{
	int month,date,s;
	scanf("%d %d", &month, &date);
	
	s=(month*2+date)%3;
	
	if(s==0)
	 printf("普通");
	if(s==1)
	 printf("吉");
	if(s==2)
	 printf("大吉");
	 
	return 0;
}
