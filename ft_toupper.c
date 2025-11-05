//#include <libft.h>
#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		c -= 32;
	return c;
}

int main(void)
{
	int un = 'a';
	int deux = 'a';

	printf("ma focntion : %c\n", ft_toupper(un));
	printf("leur fonction : %c\n", toupper(deux));
}
