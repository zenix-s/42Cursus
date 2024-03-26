#include "get_next_line.h"



// int main(void)
// {
// 	int fd;
// 	char *line;

// 	fd = open("quijote.txt", O_RDONLY);

// 	line = get_next_line(fd);
// 	while (line)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// 	free(line);
// 	close(fd);

// 	// system("leaks a.out");

// 	return (0);
// }

int main(void)
{
	int fd, fd2;
	char *line;

	fd = open("quijote.txt", O_RDONLY);
	fd2 = open("text.txt", O_RDONLY);


	line = get_next_line(0);
	// while (line)
	// {
	// 	printf("%s", line);
	// 	free(line);
	// 	line = get_next_line(0);
	// }
	free(line);
	close(fd);

	line = get_next_line(fd2);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd2);
	}
	free(line);
	close(fd2);


	// system("leaks a.out");

	return (0);
}