#include <stdio.h>

int     isalpha(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    else
        return 0;
}

int main(void)
{
    int lower = 'a';
    int upper = 'A';
    int noletter = '1';

    printf("lettre minuscule: %d\n", isalpha(lower));
    printf("lettre minuscule: %d\n", isalpha(upper));
    printf("no letter : %d\n", isalpha(noletter));
    
}