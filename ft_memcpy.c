#include "libft.h"

// Função que copia n bytes da área de memória src para a área de memória dest
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t		i;        // Índice para percorrer a memória
    char		*tmp_src; // Ponteiro temporário para src como char
    char		*tmp_dest; // Ponteiro temporário para dest como char

    tmp_src = (char *)src;
    tmp_dest = (char *)dest;
    i = 0;
    // Copia n bytes de src para dest
    while (i < n)
    {
        tmp_dest[i] = tmp_src[i];
        i++;
    }
    // Retorna o ponteiro para dest
    return (dest);
}
