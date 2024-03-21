#include "get_next_line.h"

void	ft_bzero(void *ptr, size_t len)
{
	unsigned char	*act_byte;

	act_byte = ptr;
	while (len--)
	{
		*act_byte++ = 0;
	}
}

void	*ft_calloc(size_t count, size_t len)
{
	void	*ptr;

	if (count && len && count > (SIZE_MAX / len))
		return (NULL);
	ptr = malloc(count * len);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * len);
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}



char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	char	*start_str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	start_str = str;
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (start_str);
}

char	*ft_strchr(const char *str, int chr)
{
	while (*str)
	{
		if (*str == (char)chr)
			return ((char *)str);
		str++;
	}
	if (*str == (char)chr)
		return ((char *)str);
	return (NULL);
}


size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < len - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	final_len;
	char	*substr;

	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	final_len = ft_strlen(str + start);
	if (final_len < len)
		len = final_len;
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, str + start, len + 1);
	return (substr);
}