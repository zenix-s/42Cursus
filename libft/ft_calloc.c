#include "libft.h"

void *ft_calloc(size_t count, size_t len)
{
  void *ptr;

  if (count == 0 || len == 0)
    return NULL;
  ptr = malloc(count * len);
  if (ptr == NULL)
    return NULL;
  ft_bzero(ptr, count * len);
  return ptr;
}

// int main(void)
// {
//   char *ptr;

//   ptr = ft_calloc(5, sizeof(char));
//   printf("ptr = %s\n", ptr);
//   return 0;
// }