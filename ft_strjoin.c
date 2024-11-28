#include "libft.h"

// Função que concatena duas strings s1 e s2, alocando memória para a nova string resultante
char	*ft_strjoin(char const *s1, char const *s2)
{
    size_t	i;
    size_t	s1_len;  // Comprimento da string s1
    size_t	s2_len;  // Comprimento da string s2
    char	*result; // Ponteiro para a nova string resultante

    // Obtém o comprimento das strings s1 e s2
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    // Aloca memória para a nova string, incluindo o caractere nulo
    result = (char *)malloc(((s1_len + s2_len) + 1) * sizeof(char));
    // Se a alocação falhar, retorna NULL
    if (!result)
        return (NULL);
    // Copia a string s1 para a nova string resultante
    i = 0;
    while (s1[i])
    {
        result[i] = s1[i];
        i++;
    }
    // Copia a string s2 para a nova string resultante, após s1
    i = 0;
    while (s2[i])
    {
        result[s1_len + i] = s2[i];
        i++;
    }
    // Adiciona o caractere nulo no final da nova string
    result[s1_len + i] = '\0';
    // Retorna o ponteiro para a nova string resultante
    return (result);
}
