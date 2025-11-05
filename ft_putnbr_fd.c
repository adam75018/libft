#include <unistd.h>
#include <stdio.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int nb, int fd)
{
	long n = nb;

	if(n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if(n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}

int main(void)
{
	ft_putnbr_fd(42, 1);
}
