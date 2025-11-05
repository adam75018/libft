#include <stdio.h>

int     isascii(int c)
{
    if(c >= 0 && c <= 127)
        return 1;
    else
        return 0;
}

int main(void)
{
    int ascii = 50;
    int noascii = 1000;
    printf("ascii : %d\n", isascii(ascii));
    printf("noascii : %d\n", isascii(noascii));

}