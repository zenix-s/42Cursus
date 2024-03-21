#include "get_next_line.h"



int main(void)
{
	int fd;
	char *line;

	fd = open("/Users/serferna/francinette/tests/get_next_line/fsoares/read_error.txt", O_RDONLY);

	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	close(fd);

	system("leaks a.out");

	return (0);
}