#include "get_next_line.h"

int main()
{

	int fd;
	int fd2;
	char *line;

	fd = open("file1.txt", O_RDONLY);
	fd2 = open("file2.txt", O_RDONLY);

	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	
	line = get_next_line(fd2);
	printf("%s\n", line);
	free(line);

	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);

	line = get_next_line(fd2);
	printf("%s\n", line);
	free(line);

	close(fd);
	close(fd2);
	return (0);

}