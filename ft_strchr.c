#include "libft.h"

// Função que procura a primeira ocorrência do caractere c na string s
char	*ft_strchr(const char *s, int c)
{
    int		i;

    i = 0;
    // Percorre a string s
    while (s[i])
    {
        // Se encontrar o caractere c, retorna um ponteiro para a posição correspondente
        if (s[i] == (unsigned char)c)
            return ((char *)&s[i]);
        i++;
    }
    // Se o caractere c for o caractere nulo, retorna um ponteiro para o final da string
    if ((unsigned char)c == '\0')
        return ((char *)&s[i]);
    // Se não encontrar o caractere c, retorna NULL
    return (NULL);
}
