#include "libft.h"

/**
 * Establece los primeros n bytes del área de memoria apuntada por s al valor 0.
 * @param s Puntero al área de memoria a establecer.
 * @param n Número de bytes a establecer.
*/
void bzero(void *s, size_t n) {
  unsigned char *p = s;
  while (n--)
    *p++ = 0;
}
