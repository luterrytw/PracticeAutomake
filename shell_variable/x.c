#include <stdio.h>
#include <linux/limits.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

#define VA_ARGS_TO_STRING(...) #__VA_ARGS__
#define DEFINE_TO_STRING(x) VA_ARGS_TO_STRING(x)

int main ()
{
#ifdef OTA_TAGS_DEF
	printf("define OTA: %s\n", DEFINE_TO_STRING(OTA_TAGS_DEF));
#else
	printf("not define OTA\n");
#endif
	
	return(0);
}
