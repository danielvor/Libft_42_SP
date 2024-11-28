#include "libft.h"

// Função que compara os primeiros n bytes das áreas de memória s1 e s2
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t					i;    // Índice para percorrer a memória
    const unsigned char		*ptr1; // Ponteiro para s1 como unsigned char
    const unsigned char		*ptr2; // Ponteiro para s2 como unsigned char

    ptr1 = (const unsigned char *)s1;
    ptr2 = (const unsigned char *)s2;
    i = 0;
    // Percorre os primeiros n bytes das áreas de memória
    while (i < n)
    {
        // Se encontrar uma diferença, retorna a diferença entre os bytes
        if (ptr1[i] != ptr2[i])
            return (ptr1[i] - ptr2[i]);
        i++;
    }
    // Se não encontrar diferenças, retorna 0
    return (0);
}
