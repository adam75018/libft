//#include <libft.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

char *ft_strdup(const char *s1)
{
	int i = 0;
	char *dup;
	dup = malloc(sizeof(char) * ft_strlen((s1) + 1));
	if(!dup)
		return NULL;
	while(s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return dup;
}


int main(void)
{
	char str[] = "adam";
	char str2[] = "adam";

	printf("ma fonction : %s\n", ft_strdup(str));
	printf("la fonction : %s\n", strdup(str2));
}
