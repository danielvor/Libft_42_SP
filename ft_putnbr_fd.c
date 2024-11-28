#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	number;

	if (fd < 0)
		return ;
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd((n / 10), fd);
	number = (n % 10) + '0';
	ft_putchar_fd(number, fd);
}
