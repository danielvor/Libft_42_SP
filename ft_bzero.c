#include "libft.h"

// Função que zera (define como zero) os primeiros n bytes da área de memória apontada por s
void	ft_bzero(void *s, size_t n)
{
    // Se n for zero, não há nada a fazer, então retorna imediatamente
    if (n == 0)
        return ;
    
    // Usa a função ft_memset para definir os primeiros n bytes de s como zero
    ft_memset(s, 0, n);
}
