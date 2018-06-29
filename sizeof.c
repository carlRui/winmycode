#include <stdio.h>
#include <stdlib.h>

int main()
{
	short a = 10;
	int b = 10;
	long c =10l;
	long long d = 10ll;

	printf("sizeof(a)=%u\n",sizeof(a));
	printf("sizeof(b)=%u\n",sizeof(b));
	printf("sizeof(c)=%u\n",sizeof(c));
	printf("sizeof(d)=%u\n",sizeof(d));

	printf("short a = %hd\n",a);
	printf("int b = %d \n",b);
	printf("long c = %ld\n",c);
	printf("long long d = %lld\n",d);

	unsigned short a2 = 20u;
	unsigned int b2 = 20u;
	unsigned long c2 = 20ul;
	unsigned long long d2 = 20ull;

	printf("unsigned short a2 = %hu\n",a2);
	printf("unsigned int b2 = %u\n",b2);
	printf("unsigned long c2 = %lu\n",c2);
	printf("unsigned long long d2 = %llu\n",d2);
}
