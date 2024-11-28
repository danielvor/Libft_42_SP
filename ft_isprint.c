#include "libft.h"

// Função que verifica se o caractere é imprimível (inclui espaço)
int	ft_isprint(int c)
{
    // Se o caractere estiver no intervalo de 32 a 126, retorna 1 (verdadeiro)
    if (c >= 32 && c <= 126)
        return (1);
    
    // Caso contrário, retorna 0 (falso)
    return (0);
}
