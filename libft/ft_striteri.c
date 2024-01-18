#include "libft.h"

void ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	int		i;

	i = -1;
	if (str && f)
		while (*(str + ++i))
			f(i, str + i);
	
}
