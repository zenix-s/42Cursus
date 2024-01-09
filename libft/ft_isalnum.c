
/**
 * Comprueba si el caracter es alfanumerico
 * @param character caracter a comprobar
 * @return 1 si es alfanumerico, 0 si no lo es
*/
int ft_isalnum(int character)
{
  if (character >= '0' && character <= '9'
      || (character >= 'a' && character <= 'z')
      || (character >= 'A' && character <= 'Z'))
    return (1);
  return (0);
}
