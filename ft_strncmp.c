#include "libft.h"

// Função que compara até n caracteres das strings s1 e s2
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t		i;

    i = 0;
    // Se n for 0, retorna 0 (as strings são consideradas iguais)
    if (!n)
        return (0);
    // Percorre as strings até n-1 caracteres ou até encontrar uma diferença
    while (i < n - 1 && s1[i] && s1[i] == s2[i])
        i++;
    // Retorna a diferença entre os caracteres atuais de s1 e s2
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
