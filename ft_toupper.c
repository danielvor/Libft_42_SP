#include "libft.h"

// Função que converte um caractere minúsculo para maiúsculo
int	ft_toupper(int c)
{
    // Se o caractere estiver entre 'a' e 'z', converte para maiúsculo
    if (c >= 97 && c <= 122)
        c -= 32;
    // Retorna o caractere convertido (ou o original, se não for minúsculo)
    return (c);
}
