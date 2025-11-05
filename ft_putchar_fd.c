#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main(void)
{
	char z = 'z';

	ft_putchar_fd(z, 1);
}
