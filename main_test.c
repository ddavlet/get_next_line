#include "get_next_line_myrepo/get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	char *line;
	int n;
	int fd = open("read_error.txt", O_RDONLY);
	// int fd2 = open("read_error.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return 1;
	}
	n = 0;
	// while (n < 10)
	// {
	// 	line = get_next_line(fd);
	// 	printf("%s", line);
	// 	free(line);
	// 	n++;
	// }

	while (n < 10)
	{
		line = get_next_line(fd);

		printf("%s", line);
		free(line);
		// line = get_next_line(fd2);

		// printf("%s", line);
		// free(line);
		n++;
	}

	close(fd);
	return 0;
}
