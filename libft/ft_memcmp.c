#include "libft.h"

/**
 * Compara los primeros len bytes del área de memoria str1 y str2.
 * @param str1 Puntero al área de memoria a comparar.
 * @param str2 Puntero al área de memoria a comparar.
 * @param len Número de bytes a comparar.
 * @return 0 si las áreas de memoria son iguales, un número negativo si str1 es menor que str2, un número positivo si str1 es mayor que str2.
*/
int ft_memcmp(const void *str1, const void *str2, size_t len)
{
  const unsigned char *p1 = str1;
  const unsigned char *p2 = str2;

  while (len--)
  {
    if (*p1 != *p2)
      return *p1 - *p2;
    p1++;
    p2++;
  }

  return 0;
}

int main(void)
{
  char *str1 = "Hello";
  char *str2 = "Hello World";

  printf("%d\n", ft_memcmp(str1, str2, 5));
}