#include "libft.h"

/**
 * Copia n bytes del área de memoria src al área de memoria dest.
 * @param dest Puntero al área de memoria de destino.
 * @param src Puntero al área de memoria de origen.
 * @param len Número de bytes a copiar.
 * @return Puntero al área de memoria de destino.
*/
void    *ft_memcpy(void *dest, const void *src, size_t len)
{
  unsigned char   *d;
  const unsigned char *s;

  d = (unsigned char *)dest;
  s = (const unsigned char *)src;
  while (len--)
    *d++ = *s++;
  return (dest);
}

int main(void)
{
  char src[50] = "Hello World";
  char dest[50] = "Goodbye World";

  printf("Before memcpy dest = %s\n", dest);
  ft_memcpy(dest, src, 5);
  printf("After memcpy dest = %s\n", dest);
  return 0;
}