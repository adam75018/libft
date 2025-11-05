#include <stdio.h>
#include <string.h>

int    ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int total = 0;

	while(str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '+')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - 48);
		i++;
	}
	return total * sign;
}

#include <stdlib.h>
int main(void)
{
	char str[] = "12345";
	//char str2[] = "12345";
	printf("mon atoi: %d\n", ft_atoi(str));
	printf("vrai atoi: %d\n", atoi(str));
}
