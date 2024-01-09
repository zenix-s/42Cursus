
void bzero(char *str, int n) {
  char *p;

  p = str;
  while (n-- > 0) {
    *p++ = 0;
  }
}
