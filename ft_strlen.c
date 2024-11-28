#include "libft.h"

// Função que retorna o comprimento da string s
size_t	ft_strlen(const char *s)
{
    size_t		i; // Índice para percorrer a string

    i = 0;
    // Percorre a string até encontrar o caractere nulo
    while (s[i] != '\0')
        i++;
    // Retorna o comprimento da string
    return (i);
}
