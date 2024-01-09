void *ft_memset(char *str, int c, int n)
{
  int i;

  i = 0;
  while (i < n)
  {
    str[i] = c;
    i++;
  }
  return (str);
}