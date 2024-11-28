#include "libft.h"

// Função que verifica se o caractere é uma letra (maiúscula ou minúscula)
int	ft_isalpha(int c)
{
    // Se o caractere estiver entre 'a' e 'z' ou entre 'A' e 'Z', retorna 1 (verdadeiro)
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    
    // Caso contrário, retorna 0 (falso)
    return (0);
}
