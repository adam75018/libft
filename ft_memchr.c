#include <stdio.h>
#include <string.h>
//#include <libft.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const char *str = s;
	unsigned char chr = c;
	size_t i = 0;

	while(i < n)
	{	
		if(str[i] == chr)
			return (void*)(str + i);			
	 i++;
	}
	return NULL;
}



int main(void)
{
	char str[] = "adzam";
	//memchr(str, 'm', sizeof(str));
	printf("ma fonction : %s\n", (char*)ft_memchr(str, 'z', sizeof(str)));
}

