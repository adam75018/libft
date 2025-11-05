#include <stdio.h>
#include <string.h>
#include <ctype.h>

int    ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	return c;
}


int main(void)
{
	int un = 'A';
	int deux = 'A';

	printf("ma fonction : %c\n", ft_tolower(un));
	printf("la focntion : %c\n", tolower(deux));

}
