#include "libft.h"

// Função que copia n bytes da área de memória src para a área de memória dest, 
// tratando corretamente a sobreposição de memória
void	*ft_memmove(void *dest, const void *src, size_t n)
{
    size_t		i;
    char		*tmp_src;
    char		*tmp_dest;

    tmp_src = (char *)src;
    tmp_dest = (char *)dest;
    // Se src for menor que dest, copia os bytes de trás para frente para evitar sobreposição
    if (tmp_src < tmp_dest)
    {
        i = n;
        while (i > 0)
        {
            i--;
            tmp_dest[i] = tmp_src[i];
        }
    }
    // Caso contrário, usa memcpy para copiar os bytes normalmente
    else
    {
        ft_memcpy(tmp_dest, tmp_src, n);
    }
    // Retorna o ponteiro para dest
    return (tmp_dest);
}
