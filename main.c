#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <error.h>

#define PROG_NAME

int
main(int argc, char *argv[])
{
	static const char *hello_message = "Hello, World";

	enum { array_len = 10 };
	int *mal_array_int;

	mal_array_int = (int *)malloc(array_len * sizeof(*mal_array_int));
	if (mal_array_int == NULL) {
		perror("malloc");
		exit(1);
	}

	mal_array_int[0] = 12;
	printf("%d\n", mal_array_int[0]);

	printf("%s\n", hello_message);

	free(mal_array_int);

	return 0;
}
