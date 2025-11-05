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

char *ft_strjoin(const char *s1, const char *s2)
{
	size_t i = 0;
	size_t j = 0;
	//size_t len_s1 = ft_strlen(s1);
	//size_t len_s2 = ft_strlen(s2);
	char *join;
	size_t total_len = ft_strlen(s1) + ft_strlen(s2);

//	if(s1 == NULL)
//		return NULL; 
//	if(s2 == NULL)
//		return NULL;

	join = malloc(sizeof(char *) * total_len + 1);
	if(!join)
		return NULL;

	while(s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	
	while(s2[j])
	{
		join[i + j] = s2[j];
		j++;
	}
	join[total_len] = '\0';
	return join;
}

int main(void)
{
	const char s1[] = "Hello";
	const char s2[] = "World";

	printf("resultat : %s\n", ft_strjoin(s1, s2));
}
