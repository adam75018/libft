#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	const char *source = src;
	char *dest = dst;
	size_t i = 0;

	//if (!dst && !src)
        	//return (NULL);
	
	if(dest > source)
		while(len > 0)
		{
			len = -1;
			dest[len] = source[len];
		}
	else
		while(i < len)
		{
			dest[i] = source[i];
			i++;
		}
	return dst;

}

int main(void)
{
    char buf1[] = "12345678";
    ft_memmove(buf1 + 2, buf1, 5); // overlap: décalage de 2
    printf("Resultat 1: %s\n", buf1);

    char buf2[] = "abcdefghi";
    ft_memmove(buf2 + 2, buf2, 5); // overlap: décalage de 2
    printf("Resultat 2: %s\n", buf2);
}


/*
int main(void)
{
    char source[] = "123456789";
    char dest[]	= "onsenfout";

    memmove(dest, source, 5);
    printf("voici la source: %s\n", dest);

     char data[] = "abcdefghi";
    ft_memmove(data + 2, data, 5);
    printf("Test 2: %s\n", data);
}
*/
