#include "libft.h"

/**
 * Establece los primeros n bytes del área de memoria apuntada por s al valor 0.
 * @param s Puntero al área de memoria a establecer.
 * @param n Número de bytes a establecer.
*/
void ft_bzero(void *s, size_t n) {
  ft_memset(s, 0, n);
}
