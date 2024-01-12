#include "libft.h"

/**
 * Busca la primera ocurrencia de un caracter en un área de memoria.
 * @param ptr Puntero al área de memoria a buscar.
 * @param chr Caracter a buscar.
 * @param len Número de bytes a buscar.
 * @return Puntero al byte encontrado, NULL si no se encuentra.
*/
void *ft_memchr(const void *ptr, int chr, size_t len)
{
  unsigned char *p = (unsigned char *)ptr;
  while (len--)
  {
    if (*p == (unsigned char)chr)
      return (void *)p;
    p++;
  }
  return NULL;
}
