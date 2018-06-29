#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	while(1)
	{
		i++;
		printf("i=%d\n",i);
		if(i==10)
		{
			break;
		}

	}

	int flag =10;
	int m,n;
	i = 0;
	for(m=0;m<10;m++)
	{
		for(n=0;n<10;n++)
		{
			i++;
			printf("i=%d\n",i);
			if(n == 5)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
		{
			break;
		}
	}
}
