#include "libft.h"

// Função que preenche os primeiros n bytes da área de memória apontada por s com o byte c
void	*ft_memset(void *s, int c, size_t n)
{
    size_t			i;      // Índice para percorrer a memória
    unsigned char	*s_str; // Ponteiro para s como unsigned char

    i = 0;
    s_str = (unsigned char *)s;
    // Preenche os primeiros n bytes de s com o byte c
    while (i < n)
    {
        s_str[i] = (unsigned char)c;
        i++;
    }
    // Retorna o ponteiro para s
    return (s);
}
