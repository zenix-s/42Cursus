#include "libft.h"

/**
 * Establece los primeros len bytes del área de memoria apuntada por ptr al valor 0.
 * @param ptr Puntero al área de memoria a establecer.
 * @param len Número de bytes a establecer.
*/
void ft_bzero(void *ptr, size_t len) {
  ft_memset(ptr, 0, len);
}