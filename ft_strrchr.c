#include "libft.h"

// Função que procura a última ocorrência do caractere c na string s
char	*ft_strrchr(const char *s, int c)
{
    int		i;

    // Obtém o comprimento da string s
    i = ft_strlen(s);
    // Percorre a string de trás para frente
    while (i >= 0)
    {
        // Se encontrar o caractere c, retorna um ponteiro para a posição correspondente
        if (s[i] == (unsigned char)c)
            return ((char *)&s[i]);
        i--;
    }
    // Se não encontrar o caractere c, retorna NULL
    return (NULL);
}
