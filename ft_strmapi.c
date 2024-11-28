#include "libft.h"

// Função que aplica a função f a cada caractere da string s, criando uma nova string com os resultados
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int		i;
    unsigned int		s_len;
    char				*result;

    i = 0;
    s_len = ft_strlen(s);
    // Aloca memória para a nova string, incluindo o caractere nulo
    result = (char *)malloc((s_len + 1) * sizeof(char));
    // Se a alocação falhar, retorna NULL
    if (!result)
        return (NULL);
    // Percorre cada caractere da string s
    while (s[i])
    {
        // Aplica a função f ao caractere atual e armazena o resultado na nova string
        result[i] = f(i, s[i]);
        i++;
    }
    // Adiciona o caractere nulo no final da nova string
    result[i] = '\0';
    // Retorna o ponteiro para a nova string resultante
    return (result);
}
