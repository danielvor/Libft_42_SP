#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_str;

	i = 0;
	s_str = (unsigned char *)s;
	while (i < n)
	{
		s_str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
