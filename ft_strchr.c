#include <stdio.h>
#include <string.h>
//#include <libft.h>


char *ft_strchr(const char *s, int c)
{
	int i = 0;
	char car = c;

	while(s[i] != '\0')
	{
		if(s[i] == car)
			return (char *)(s + i);
		i++;

	}
	if(s[i] == c)
		return (char *)(s + i);
	else
		return NULL;
}

int main(void)
{
	
	const char str2[] = "Je suis Adam";
	printf("ma fonction : %s\n", ft_strchr(str2, 'y'));
	
//	const char str[] = "je suis Adam";
//	printf("la fonction :%s\n", strchr(str, 'y'));
}
