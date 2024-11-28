#include "libft.h"

// Função que verifica se o caractere está dentro da tabela ASCII
int	ft_isascii(int c)
{
    // Se o caractere estiver no intervalo de 0 a 127, retorna 1 (verdadeiro)
    if (c >= 0 && c <= 127)
        return (1);
    
    // Caso contrário, retorna 0 (falso)
    return (0);
}
