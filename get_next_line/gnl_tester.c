#include "get_next_line.h"

int main()
{

	int fd;
	char *line;

	fd = open("file1.txt", O_RDONLY);

	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);

}