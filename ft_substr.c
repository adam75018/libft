//#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t i = 0;
	char *str;
	char *vide;
	size_t len_rest = ft_strlen(s) - (size_t)start;
	size_t size_cpy;
	size_t len_s = ft_strlen(s);

	if(s == NULL)
		return NULL;

	if(start >= len_s)
	{
		vide = malloc(1);
		if(!vide)
			return NULL;
		vide[0] = '\0';
		return vide; 
	}

	if(len_rest < len)
	{
		size_cpy = len_rest;
	}
	else
	{
		size_cpy = len;
	}

	
	str = malloc(size_cpy + 1);
	if(!str)
		return NULL;
	
	while(i < size_cpy)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return str;
}

int main(void)
{

	const char chaine[] = "Bonjour l'equipe";
	printf("voici la chaine cut : %s\n", ft_substr(chaine, 3, 12));
	printf("len de la chaine : %d\n", ft_strlen(chaine));
}
