// Função que aplica a função f a cada caractere da string s, passando o índice do caractere como primeiro argumento
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int	i; // Índice para percorrer a string

    i = 0;
    // Percorre cada caractere da string s
    while (s[i])
    {
        // Aplica a função f ao caractere atual, passando o índice e o endereço do caractere
        f(i, &s[i]);
        i++;
    }
}
