#include "libft.h"

// Função que duplica a string s, alocando memória para a nova string
char	*ft_strdup(const char *s)
{
    char		*dest;    // Ponteiro para a nova string duplicada
    size_t		s_len;    // Comprimento da string original

    // Obtém o comprimento da string original
    s_len = ft_strlen(s);
    // Aloca memória para a nova string, incluindo o caractere nulo
    dest = (char *)malloc((s_len + 1) * sizeof(char));
    // Se a alocação falhar, retorna NULL
    if (!dest)
        return (NULL);
    // Copia a string original para a nova string
    ft_strlcpy(dest, s, s_len + 1);
    // Retorna o ponteiro para a nova string duplicada
    return (dest);
}
