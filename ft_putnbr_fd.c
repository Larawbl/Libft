#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (-2147483648 == n)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		n = -n;
		write(fd, "-", 1);
	}

	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n < 10)
	{
		n += 48;
		write(fd, &n, 1);
	}
}