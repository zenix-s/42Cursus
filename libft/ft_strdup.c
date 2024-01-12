#include "libft.h"
char  *ft_strdup(const char *str)
{
  char *ptr;
  int i;

  i = 0;
  ptr = (char *)malloc(ft_strlen(str) + 1);
  if (ptr == NULL)
    return NULL;
  while (str[i] != '\0')
  {
    ptr[i] = str[i];
    i++;
  }
  ptr[i] = '\0';
  return ptr;
}

int main(void)
{
  char *str = "hola mundo";
  char *ptr = ft_strdup(str);
  printf("%s\n", ptr);  
}