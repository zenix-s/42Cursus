#include "libft.h"
/**
 * Comprueba si el caracter es un valor ASCII
 * @param chr caracter a comprobar
 * @return 1 si es un valor ASCII, 0 si no lo es
*/
int ft_isascii(int chr)
{
  if (chr >= 0 && chr <= 127)
    return (1);
  return (0);
}