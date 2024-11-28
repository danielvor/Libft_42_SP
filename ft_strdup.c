#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*dest;
	size_t		s_len;

	s_len = ft_strlen(s);
	dest = (char *)malloc((s_len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s, s_len + 1);
	return (dest);
}
