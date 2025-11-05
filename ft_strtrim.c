//#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

int is_set(char const *str, char const *c)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == c)
		return 1;
		i++;
	}
	return 0;
}


int ft_strlen(char const *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i = 0;
	int start = 0;
	int end = ft_strlen(s1);
	char *trim;

	while(i < end && !is_set(s1, set))
	{
		s1[i] = s1[start];
		i++;
		start++;
	}
	while(i > 0 && !is_set(s1, set))
	{
		s1[i] = s1[end];
		i--;
		end++;
	}

	trim = malloc(sizeof(char *) * (end - start) + 1);
	if(!trim)
		return NULL;

	while(trim[i] && !is_set(s1, set))
	{
		trim[i] = s1[i];
		i++;
	}
	return trim;
}

int main(void)
{
	const char s1[] = "ababaaaMy name is Simonbbaaabbad";
	const char set[] = "ab";

	printf("sans les ab ca donne : %s\n", ft_strtrim(s1, set));
}
