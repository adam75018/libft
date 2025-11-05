#include <string.h>
#include <stdio.h>
//#include <libft.h>

void    *ft_memset(void *b, int c, size_t len)
{
	char* dest = b;
	unsigned char copie = c;
	size_t i = 0;

	while(i < len)
	{
		dest[i] = copie;
		i++;
		//copie++;
	}
	return dest;


}	


int main(void)
{
	char str[] = "adam";
	char str2[] = "adam";
	ft_memset(str, 'o', 3);
	memset(str2, 'o', 3);
		
	printf("voici ma fonction: %s\n", str);
	printf("voici la vrai focntion: %s\n", str2);
}
	
