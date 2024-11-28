#include "libft.h"

// Função que verifica se o caractere é um dígito (0-9)
int	ft_isdigit(int c)
{
    // Se o caractere estiver entre '0' e '9', retorna 1 (verdadeiro)
    if (c >= '0' && c <= '9')
        return (1);
    
    // Caso contrário, retorna 0 (falso)
    return (0);
}
