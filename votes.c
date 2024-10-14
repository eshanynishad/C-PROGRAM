#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	c=0;
	d=0;
	printf("enter number of votes");
	scanf("%d",&e);
	printf("enter your age");
	scanf("%d",&a);
	while(e>0)
	{
		if(a>=18)
		{
			printf("president candidate:-\n1.sam\n2.arjun");
			printf("\enter s.no to vote");
			scanf("%d",&b);
		}
		if(b==1)
		{
			c++;
		}
		else if(b==2)
		{
			d++;
		}
		else
		printf("invalid vote");
		e--;
	}
	    if(e==0&&c>d)
	    printf("sam wins");
	    else if("d>c")
	    printf("arjun wins");
	    else
	    printf("draw");
		return 0;
	
}
