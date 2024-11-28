#include "libft.h"

// Função que remove os caracteres especificados em set do início e do final da string s1
char	*ft_strtrim(char const *s1, char const *set)
{
    size_t	i;
    size_t	start;
    size_t	end;
    char	*result;

    // Se s1 ou set for NULL, retorna NULL
    if (!s1 || !set)
        return (NULL);
    start = 0;
    // Encontra o índice do primeiro caractere de s1 que não está em set
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    // Encontra o índice do último caractere de s1 que não está em set
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    // Aloca memória para a nova string resultante
    result = (char *)malloc((end - start + 1) * sizeof(char));
    // Se a alocação falhar, retorna NULL
    if (!result)
        return (NULL);
    i = 0;
    // Copia os caracteres de s1 que não estão em set para a nova string
    while (start < end)
        result[i++] = s1[start++];
    // Adiciona o caractere nulo no final da nova string
    result[i] = '\0';
    // Retorna o ponteiro para a nova string resultante
    return (result);
}
