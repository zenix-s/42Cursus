#include "get_next_line.h"

int main()
{

	int fd;
	int fd2;
	char *line;

	fd = open("file1.txt", O_RDONLY);

	while ((line = get_next_line(fd)))
	{
		printf("%s\n", line);
		free(line);
	}



	close(fd);
	close(fd2);
	return (0);

}