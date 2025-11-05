//#include <libft.h>
#include <string.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
	char *str = s;
	size_t i = 0;

	while(i < n)
	{
		str[i] = '\0';
		i++;
	}
}


int main(void)
{
	char str[] = "adam";
	char str2[] = "adam";

	bzero(str, 2);
	printf("result: %s\n", str);
	
	ft_bzero(str2, 2);
	printf("result: %s\n", str2);


}	
