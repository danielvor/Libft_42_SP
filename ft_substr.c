#include "libft.h"

// Função que retorna uma substring da string s, começando no índice start e com comprimento len
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t	i;
    size_t	s_len;      // Comprimento da string s
    size_t	alloc_len;  // Comprimento da substring a ser alocada
    char	*sub_str;   // Ponteiro para a substring resultante

    // Se s for NULL, retorna NULL
    if (!s)
        return (NULL);
    s_len = ft_strlen(s);
    // Se start for maior ou igual ao comprimento de s, retorna uma string vazia
    if (start >= s_len)
        return (ft_calloc(1, sizeof(char)));
    // Calcula o comprimento da substring a ser alocada
    alloc_len = s_len - start;
    if (len < alloc_len)
        alloc_len = len;
    // Aloca memória para a substring, incluindo o caractere nulo
    sub_str = malloc((alloc_len + 1) * sizeof(char));
    // Se a alocação falhar, retorna NULL
    if (!sub_str)
        return (NULL);
    i = 0;
    // Copia os caracteres de s para a substring
    while (i < alloc_len)
    {
        sub_str[i] = s[start + i];
        i++;
    }
    // Adiciona o caractere nulo no final da substring
    sub_str[i] = '\0';
    // Retorna o ponteiro para a substring resultante
    return (sub_str);
}
