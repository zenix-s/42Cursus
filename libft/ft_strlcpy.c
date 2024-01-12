#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t len)
{
  size_t i;
  
  i = 0;
  while (src[i] != '\0' && i < len - 1)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  while (src[i] != '\0')
  {
    i++;
  }

  return i;
}

// int main(void)
// {
//   char src[50] = "Hola mundo";
//   char dest[50] = "Adios Mundo";

//   printf("Antes strlcpy  = %s\n", dest);
//   ft_strlcpy(dest, src, 5);
//   printf("Despues strlcpy = %s\n", dest);
//   return 0;
// }