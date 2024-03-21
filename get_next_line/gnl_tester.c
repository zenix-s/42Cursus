#include "get_next_line.h"

char *get_line_leave_rest(char **text)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(*text);

	while ((*text)[i] != '\n' && (*text)[i] != '\0')
		i++;

	char *line = ft_substr(*text, 0, i + 1);
	char *rest = ft_substr(*text, i + 1, len - i);
	free(*text);
	*text = rest;
	return (line);
}

char *read_file(int fd)
{
	char *buffer;
	char *text;
	char *temp;
	int bytes_read;

	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	text = ft_calloc(1, sizeof(char));

	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(text, buffer);
		free(text);
		text = temp;
		if (ft_strchr(buffer, '\n'))
			break;
	}
	free(buffer);
	return (text);

}

char *get_next_line(int fd)
{
	static char *text;
	char *line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	if (!text)
		text = read_file(fd);

	if (!text)
		return (NULL);

	if (!ft_strchr(text, '\n'))
	{
		line = ft_strdup(text);
		free(text);
		text = NULL;
		return (line);
	}

	return (get_line_leave_rest(&text));
}

int main(void)
{
	int fd;
	char *line;
	int i = 0;

	fd = open("test.txt", O_RDONLY);
	// while ((line = get_next_line(fd)))
	// {
	// 	printf("Line %d: %s", i, line);
	// 	free(line);
	// }
	printf("Line %d: %s", i, get_next_line(fd));
	close(fd);
	return (0);
}