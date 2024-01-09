/**
 * Comprueba si el caracter es imprimible
 * @param character caracter a comprobar
 * @return 1 si es imprimible, 0 si no lo es
*/
int ft_isprint(int character)
{
  if (character >= 32 && character <= 126)
    return (1);
  return (0);
}

