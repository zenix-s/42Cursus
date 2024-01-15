/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serferna <serferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:54:42 by serferna          #+#    #+#             */
/*   Updated: 2024/01/15 10:29:18 by serferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/**
 * Comprueba si un caracter es alfanumerico
 * @param chr caracter a comprobar
 * @return 1 si es alfanumerico, 0 si no lo es
*/
int		ft_isalpha(int chr);

/**
 * Comprueba si un caracter es numerico
 * @param chr caracter a comprobar
 * @return 1 si es numerico, 0 si no lo es
*/
int		ft_isdigit(int chr);

/**
 * Comprueba si un caracter es alfanumerico
 * @param chr caracter a comprobar
 * @return 1 si es alfanumerico, 0 si no lo es
*/
int		ft_isalnum(int chr);

/**
 * Comprueba si un caracter es imprimible
 * @param chr caracter a comprobar
 * @return 1 si es imprimible, 0 si no lo es
*/
int		ft_isascii(int chr);

/**
 * Comprueba si un caracter es imprimible
 * @param chr caracter a comprobar
 * @return 1 si es imprimible, 0 si no lo es
*/
int		ft_isprint(int chr);

/**
 * Convierte un caracter a mayusculas
 * @param chr caracter a convertir
 * @return caracter convertido
*/
int		ft_toupper(int chr);

/**
 * Convierte un caracter a minusculas
 * @param chr caracter a convertir
 * @return caracter convertido
*/
int		ft_tolower(int chr);

/**
 * Calcula la longitud de una cadena
 * @param str cadena a calcular
 * @return longitud de la cadena
*/
size_t	ft_strlen(const char *str);

/**
 * Compara dos cadenas
 * @param str1 cadena 1
 * @param str2 cadena 2
 * @param len numero de caracteres a comparar
 * @return 0 si son iguales, <0 si str1 es menor que str2, 
 * >0 si str1 es mayor que str2
*/
char	*ft_strchr(const char *str, int chr);

/**
 * Busca un caracter en una cadena desde el final
 * @param str1 cadena 1
 * @param str2 cadena 2
 * @param len numero de caracteres a comparar
 * @return Un puntero a la última aparición del carácter c en la cadena s.
*/
char	*ft_strrchr(const char *str, int chr);

/**
 * Compara dos cadenas
 * @param str1 cadena 1
 * @param str2 cadena 2
 * @param len numero de caracteres a comparar
 * @return 0 si son iguales, <0 si str1 es menor que str2, 
 * >0 si str1 es mayor que str2
*/
int		ft_strncmp(const char *str1, const char *str2, size_t len);

/**
 * Compara dos cadenas
 * @param str1 cadena 1
 * @param str2 cadena 2
 * @param len numero de caracteres a comparar
 * @return 0 si son iguales, <0 si str1 es menor que str2, 
 * >0 si str1 es mayor que str2
*/
int		ft_strnstr(const char *str, const char *str_to_find);

/**
 * Copia una cadena en otra
 * @param dst cadena destino
 * @param src cadena origen
 * @param len numero de caracteres a copiar
 * @return longitud de la cadena copiada
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t len);

/**
 * Concatena dos cadenas
 * @param dst cadena destino
 * @param src cadena origen
 * @param len numero de caracteres a copiar
 * @return longitud de la cadena copiada
*/
size_t	ft_strlcat(char *dst, const char *src, size_t len);

/**
 * @param 
*/
char	*ft_strdup(const char *str);

void	*ft_memset(void *ptr, int chr, size_t len);

void	ft_bzero(void *ptr, size_t len);

void	*ft_memcpy(void *dest, const void *src, size_t len);

void	*ft_memmove(void *dest, const void *src, size_t len);

void	*ft_memchr(const void *ptr, int chr, size_t len);

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t len);

/**
 * Convierte una cadena str a un entero
 * Puede contener caracteres del isspace antes del numero 
 * y un signo + o - antes del numero
 * Si el numero es mayor que el maximo entero devuelve el maximo entero
 * @param str cadena a convertir
 * @return entero convertido
 *  
*/
int		ft_atoi(const char *str);

/**
 * Reserva memoria con malloc y la inicializa a 0
 * @param count numero de elementos
 * @param len tamaño de cada elemento
 * @return puntero a la memoria reservada
*/
void	*ft_calloc(size_t count, size_t len);

/**
 * Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
 * La substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’
 * @param str
 * @param start
 * @param len
 * @return
*/
char	*ft_substr(const char *str, unsigned int start, size_t len);

/**
 * Reserva (con malloc(3)) y devuelve una nueva string, 
 * formada por la concatenación de ’s1’ y ’s2’.
 * @param s1 Primera cadena
 * @param s2 Segunda cadena
 * @return Cadena concatenada
*/
char	*ft_strjoin(const char *s1, const char *s2);

/**
 * Elimina todos los caracteres de la string ’set’ 
 * desde el principio y desde el final de ’s1’, 
 * hasta encontrar un caracter no perteneciente a ’set’.
 * @param str Cadena a recortar
 * @param set Caracteres a recortar
 * @return String resultante se devuelve con una reserva de malloc(3)
*/
char	*ft_strtrim(const char *str, const char *set);

#endif
