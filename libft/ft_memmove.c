#include "libft.h"

/**
 * Copia len bytes del área de memoria src al área de memoria dest (se garantiza que las áreas de memoria no se solapen).
 * @param dest Puntero al área de memoria de destino.
 * @param src Puntero al área de memoria de origen.
 * @param len Número de bytes a copiar.
 * @return Puntero al área de memoria de destino.
*/
void *ft_memmove(void *dest, const void *src, size_t len)
{
  unsigned char *d;
  unsigned char *s;
  unsigned char *lastd;
  unsigned char *lasts;

  d = (unsigned char *)dest;
  s = (unsigned char *)src;
  if (d < s)
  {
    while (len--)
    {
      *d++ = *s++;
    }
  }
  else
  {
    lastd = d + (len - 1);
    lasts = s + (len - 1);
    while (len--)
    {
      *lastd-- = *lasts--;
    }
  }
  return dest;
}