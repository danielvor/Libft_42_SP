#include "libft.h"

// Função que verifica se o caractere é alfanumérico (letra ou dígito)
int	ft_isalnum(int c)
{
    // Se o caractere for uma letra (maiúscula ou minúscula) ou um dígito, retorna 1 (verdadeiro)
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    
    // Caso contrário, retorna 0 (falso)
    return (0);
}
