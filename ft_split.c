#include "libft.h"

static size_t	count_tokens(char const *s, char sep)
{
	size_t		i;
	size_t		tokens;

	i = 0;
	tokens = 0;
	while (s[i])
	{
		if (s[i] != sep && (s[i + 1] == sep || s[i + 1] == '\0'))
			tokens++;
		i++;
	}
	return (tokens);
}

static char	*get_word(const char *s, size_t *index, char sep)
{
	size_t		i;
	size_t		len;
	size_t		start;
	char		*word;

	len = 0;
	while (s[*index] == sep)
		(*index)++;
	start = *index;
	while (s[*index] != sep && s[*index])
	{
		len++;
		(*index)++;
	}
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static char	**free_tokens(char **tokens, size_t count)
{
	size_t		i;

	i = 0;
	while (i < count)
	{
		free(tokens[i]);
		i++;
	}
	free(tokens);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
    size_t		i;            // Índice para percorrer a string s
    size_t		j;            // Índice para percorrer o vetor de tokens
    char		**token_vector; // Ponteiro para o vetor de tokens

    // Se a string s for NULL, retorna NULL
    if (!s)
        return (NULL);
    // Aloca memória para o vetor de tokens, com espaço para todos os tokens mais um NULL no final
    token_vector = malloc((count_tokens(s, c) + 1) * sizeof(char *));
    // Se a alocação falhar, retorna NULL
    if (token_vector == NULL)
        return (NULL);
    i = 0;
    j = 0;
    // Percorre a string s
    while (s[i])
    {
        // Ignora os caracteres delimitadores
        while (s[i] == c)
            i++;
        // Se chegar ao final da string, sai do loop
        if (s[i] == '\0')
            break ;
        // Obtém a próxima palavra e armazena no vetor de tokens
        token_vector[j] = get_word(s, &i, c);
        // Se a obtenção da palavra falhar, libera a memória alocada e retorna NULL
        if (!token_vector[j])
            return (free_tokens(token_vector, j));
        j++;
    }
    // Define o último elemento do vetor de tokens como NULL
    token_vector[j] = NULL;
    // Retorna o vetor de tokens
    return (token_vector);
}
