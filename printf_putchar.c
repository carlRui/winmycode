#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 100;
	printf("a = %d\n",a);
	printf("%p\n",&a);
	printf("%%d\n");

	char c = 'a';
	putchar(c);
	long a2 = 100;
	printf("%ld,%lx,%lo\n",a2,a2,a2);

	long long a3 = 1000;
	printf("%lld,%llx,%llo\n",a3,a3,a3);

	int abc = 10;
	printf("abc = '%6d'\n",abc);
	printf("abc = '%-6d'\n",abc);
	printf("abc = '%06d'\n",abc);
	printf("abc = '%-06d'\n",abc);

	double d = 12.3;
	printf("d = \'%-10.3lf\'\n",d);

	return 0;
}
