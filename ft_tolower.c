#include "libft.h"

// Função que converte um caractere maiúsculo para minúsculo
int	ft_tolower(int c)
{
    // Se o caractere estiver entre 'A' e 'Z', converte para minúsculo
    if (c >= 'A' && c <= 'Z')
        c += 32;
    // Retorna o caractere convertido (ou o original, se não for maiúsculo)
    return (c);
}
