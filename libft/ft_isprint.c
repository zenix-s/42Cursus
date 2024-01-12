#include "libft.h"
/**
 * Comprueba si el caracter es imprimible
 * @param chr caracter a comprobar
 * @return 1 si es imprimible, 0 si no lo es
*/
int ft_isprint(int chr)
{
  if (chr >= 32 && chr <= 126)
    return (1);
  return (0);
}

