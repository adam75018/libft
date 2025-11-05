#include <stdio.h>
#include <string.h>
//#include <libft.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *str1 = s1;
	const char *str2 = s2;
	size_t i = 0;

	while(i < n && str1[i] == str2[i])
	{
		i++;
	}
	if(i == n)
		return 0;
	else
		return str1[i] - str2[i];
}


int main(void)
{
	char str1[] = "adam";
	char str2[] = "zdam";

	printf("ma fonction: %d\n", ft_memcmp(str1, str2, sizeof(str1)));
}
