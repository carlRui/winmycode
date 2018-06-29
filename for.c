#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,k;
	int num = 0;
	
	for(i = 0;i<10;i++)
	{
		for(j = 0;j<10;j++)
		{
			for(k=0;k<10;k++)
			{
				printf("hello world\n");
				num++;
			}
		}
	}
	printf("num = %d\n",num);

	return 0;
}
