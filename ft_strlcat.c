#include <stdio.h>
#include <unistd.h>
//#include <libft.h>

int ft_strlen(char *str)
{
	int  i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

/*
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len = ft_strlen(dst);
	size_t	src_len = ft_strlen(src);
	size_t	i;

	if (dest_len >= dstsize)
	{
		return (dstsize + src_len);
	}

	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (dstsize - 1))
	{
		dst[dest_len + i] = src[i];
		i++;
	}

	dst[dest_len + i] = '\0';

	return (dest_len + src_len);
}
*/

#include <string.h>
int main(void)
{
    char str1[30] = "adam";
    char str2[30] = "ali";
    char str3[30] = "adam";
    char str4[30] = "ali";

    printf("strlcat (original): %zu\n", strlcat(str2, str1, 20));
    printf("ma fonction : %zu\n", ft_strlcat(str4, str3, 20));

    printf("résultat strlcat  : %s\n", str2);
    printf("résultat ft_strlcat : %s\n", str4);

    return 0;
}


/*int main(void)
{
        char str1[] = "adam";
        char str2[] = "ali";
	char str3[] = "adam";
	char str4[] = "ali";

       // strlcat(str2, str1, 2);
        printf("%zu\n",strlcat(str2, str1, 20));

	//ft_strlcat(str4, str3, 20);
	printf("ma fonction: %zu\n", ft_strlcat(str4, str3, 20));
}
*/
