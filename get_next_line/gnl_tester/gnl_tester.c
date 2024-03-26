#include "../get_next_line.h"



int main(int argc, char **argv)
{
	int fd;
	char *line;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			printf("Error\n");
			return (1);
		}
		line = get_next_line(fd);
		while (line)
		{
			printf("%s", line);
			free(line);
			line = get_next_line(fd);
		}
		free(line);
		close(fd);
	}
	else if (argc == 1)
	{
		line = get_next_line(0);
		while (line)
		{
			printf("%s", line);
			free(line);
			line = get_next_line(0);
		}
		free(line);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}

// int main(void)
// {
// 	int fd, fd2;
// 	char *line;

// 	fd = open("quijote.txt", O_RDONLY);
// 	fd2 = open("text.txt", O_RDONLY);


// 	line = get_next_line(0);
// 	while (line)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(0);
// 	}
// 	free(line);
// 	close(fd);

// 	line = get_next_line(fd2);
// 	while (line)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd2);
// 	}
// 	free(line);
// 	close(fd2);


// 	// system("leaks a.out");

// 	return (0);
// }