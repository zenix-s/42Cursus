#include "libft.h"
/**
 * Comprueba si el caracter es alfanumerico
 * @param chr caracter a comprobar
 * @return 1 si es alfanumerico, 0 si no lo es
*/
int ft_isalnum(int chr)
{
  if (ft_isalpha(chr) || ft_isdigit(chr))
    return (1);
  return (0);
}

int main(void)
{
  printf("%d\n", ft_isalnum('a'));
  printf("%d\n", ft_isalnum('1'));
  printf("%d\n", ft_isalnum(' '));
  printf("%d\n", ft_isalnum('!'));
  return 0;
}