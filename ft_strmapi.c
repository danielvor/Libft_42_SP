#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	unsigned int		s_len;
	char				*result;

	i = 0;
	s_len = ft_strlen(s);
	result = (char *)malloc((s_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
