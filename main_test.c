#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	char *line;
	int n;
	int fd = open("tests/read_error.txt", O_RDONLY);
	int fd2 = open("tests/1char.txt", O_RDONLY);
	int fd3 = open("tests/42_no_nl.txt", O_RDONLY);
	int fd4 = open("tests/one_line_no_nl.txt", O_RDONLY);
	int fd5 = open("tests/nl.txt", O_RDONLY);
	int fd6 = open("tests/multiple_nlx5.txt", O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		return 1;
	}
	n = 0;
	printf("\nTEST 1\n");
	while (n < 10)
	{
		line = get_next_line(fd);

		printf("%s", line);
		free(line);
		n++;
	}
	n = 0;
	printf("\nTEST 2\n");
	while (n < 10)
	{
		line = get_next_line(fd2);

		printf("%s", line);
		free(line);
		n++;
	}
	n = 0;
	printf("\nTEST 3\n");
	while (n < 10)
	{
		line = get_next_line(fd3);

		printf("%s", line);
		free(line);
		n++;
	}
	n = 0;
	printf("\nTEST 4\n");
	while (n < 10)
	{
		line = get_next_line(fd4);

		printf("%s", line);
		free(line);
		n++;
	}
	n = 0;
	printf("\nTEST 5\n");
	while (n < 10)
	{
		line = get_next_line(fd5);

		printf("%s", line);
		free(line);
		n++;
	}
	n = 0;
	printf("\nTEST 6\n");
	while (n < 10)
	{
		line = get_next_line(fd6);

		printf("%s", line);
		free(line);
		n++;
	}
	n = 0;
	printf("\nTEST 7\n");
	line = get_next_line(0);

	printf("%s", line);
	free(line);
	line = get_next_line(0);

	printf("%s", line);
	free(line);


	close(fd);\n
	return 0;
}
