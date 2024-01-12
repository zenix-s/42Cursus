#include "libft.h"

/**
 * Busca la primera aparición de la subcadena to_find en la cadena str.
 * @param str Cadena en la que buscar.
 * @param str_to_find Subcadena a buscar.
 * @return Retorna la posición de la primera aparición de str_to_find en str.
*/
int ft_strnstr(const char *str, const char *str_to_find)
{
  int i;
  int j;

  i = 0;
  if (str_to_find[0] == '\0')
    return 0;
  while (str[i] != '\0')
  {
    j = 0;
    while (str[i + j] == str_to_find[j])
    {
      if (str_to_find[j + 1] == '\0')
        return i;
      j++;
    }
    i++;
  }
  return -1;
}

// int main(void)
// {
//   char str[50] = "Hola mundo";
//   char str_to_find[50] = "mundo";

//   printf("Antes strnstr  = %s\n", str);
//   printf("Despues strnstr = %s\n", str_to_find);
//   printf("Resultado strnstr = %d\n", ft_strnstr(str, str_to_find));
//   return 0;
// }