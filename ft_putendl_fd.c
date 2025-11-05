//#include <libft.h>
#include <stdio.h>
#include <unistd.h> 
void    ft_putendl_fd(char *str, int fd)
{
	int i = 0;

	while(str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

int main(void)
{
	char str[] = "wshwshcousin";
	ft_putendl_fd(str, 1);
}
