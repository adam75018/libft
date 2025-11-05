#include <stdio.h>

int     isdigit(int c)
{
        if(c >= '0' && c <= '9')
            return 1;
        else
            return 0;
}

int main(void)
{
    int ten = 10;
    int digit = '5';

    printf("voici pas digit : %d\n", isdigit(ten));
    printf("voici un digit : %d\n", isdigit(digit));
}
