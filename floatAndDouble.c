#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a = 3.14f;
	double b = 3.14;

	printf("a=%f\n",a);
	printf("b=%lf\n",b);

	a=3.2e3f;
	printf("a1=%f\n",a);

	a=100e-3f;
	printf("a2=%f\n",a);

	a=3.1415926f;
	printf("a3=%f\n",a);

	return 0;
}
