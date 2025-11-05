#include <stdio.h>

int     isprint(int c)
{
    if(c >= 32 && c <= 126)
        return 1;
    else
        return 0;
}

int main(void)
{
    int print = '300';
    int noprint = ' ';

    printf("flop pritable: %d\n", isprint(print));
    printf("no printable : %d\n", isprint(noprint));
}