#include <stdio.h>
#include <stdlib.h>

int mian()
{
	goto End;
	printf("aaa\n");
End:
	printf("bbb\n");

	return 0;
}
