#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define PROG_NAME

int
main(int argc, char *argv[])
{
	static const char *hello_message = "Hello, World";

	printf("%s\n", hello_message);

	return 0;
}
