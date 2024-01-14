#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	char *str;
	size_t len1;
	size_t len2;
	size_t i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		str[i + len1] = s2[i];
		i++;
	}
	str[len1 + len2] = '\0';
	return (str);
}

int main(void)
{
	char *s1 = "Hola";
	char *s2 = "Mundo";
	char *s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	free(s3);
	return (0);
}