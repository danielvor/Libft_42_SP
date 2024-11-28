#include "libft.h"

// Função que procura a primeira ocorrência do caractere c (convertido para unsigned char) 
// nos primeiros n bytes da área de memória apontada por s
void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t					i;       // Índice para percorrer a memória
    const unsigned char		*s_copy; // Cópia do ponteiro s como unsigned char

    i = 0;
    s_copy = (const unsigned char *)s;
    // Percorre os primeiros n bytes da área de memória
    while (i < n)
    {
        // Se encontrar o caractere c, retorna um ponteiro para a posição correspondente
        if (s_copy[i] == (unsigned char)c)
            return ((void *)&s_copy[i]);
        i++;
    }
    // Se não encontrar o caractere c, retorna NULL
    return (NULL);
}
