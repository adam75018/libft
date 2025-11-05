#include <string.h>
//#include <libft.h>
#include <stdio.h>


char *ft_strrchr(const char *s, int c)
{
	char crc = c;
	int i = 0;

	while(s[i] != '\0')
		i++;
	while(i >= 0)
	{
		if(s[i] == c)
			return(char *)(s + i);
		i--;
	}
	return NULL;


}


int main(void)
{
	char str[] = "Je suis Adam";
	printf("la fonction: %s\n", strrchr(str, 'x'));

	char str2[]  = "Je suis Adam";
	printf("ma fonction: %s\n", ft_strrchr(str2, 'y'));
}
