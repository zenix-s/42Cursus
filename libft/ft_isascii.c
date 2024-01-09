
/**
 * Comprueba si el caracter es un valor ASCII
 * @param character caracter a comprobar
 * @return 1 si es un valor ASCII, 0 si no lo es
*/
int ft_isascii(int character)
{
  if (character >= 0 && character <= 127)
    return (1);
  return (0);
}