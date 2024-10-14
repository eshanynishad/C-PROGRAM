#include<stdio.h>
int main()
{
	int i,m,c;
	printf("enter a number");
	scanf("%d",&m);
	i= 1;
	c= 1;
	while(i<=m)
	{
		c= c*i;
		i++;
	
	}
	printf("factorial od %d",c);
	return 0;
	
	
}
