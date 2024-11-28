#include "libft.h"

// Função que procura a primeira ocorrência da string little na string big, 
// mas não mais do que len caracteres são examinados
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t		i;
    size_t		j;

    i = 0;
    // Se little for uma string vazia, retorna big
    if (little[i] == '\0')
        return ((char *)big);
    // Percorre a string big até len caracteres
    while (i < len && big[i])
    {
        j = 0;
        // Compara little com a substring de big
        while (little[j] == big[i + j] && (i + j) < len)
        {
            // Se alcançar o final de little, retorna um ponteiro para a posição correspondente em big
            if (little[j + 1] == '\0')
                return ((char *)&big[i]);
            j++;
        }
        i++;
    }
    // Se não encontrar little em big, retorna NULL
    return (NULL);
}
