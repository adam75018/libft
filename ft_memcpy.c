#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dest = dst;
	const char *source = src;

	size_t i = 0;

	while(i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return dst;
}

int main(void)
{
	char src[] = "sourcebiencopie---";
	char dst[] = "destaecraseravecplusdespacequelasource";


	 ft_memcpy(dst, src, sizeof(src));
	 printf("ma fonction : %s\n", dst);
	
	 memcpy(dst, src, sizeof(src));
	 printf("la vrai fonction: %s\n", dst);
}
