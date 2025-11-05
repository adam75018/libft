#include <stdio.h>

int     isspace(int c)
{
    if(c == ' ' || c == '\t' || c == '\n'
        || c == '\v' || c == '\f' || c == '\r')
        return 1;
    else
        return 0;

}


int main(void)
{
    //int space = ' ';
    //int nospace = 12345;
    printf("tab : %d\n", isspace('\t'));
    printf("newline: %d\n", isspace('\n'));
    printf("v: %d\n", isspace('\v'));
    printf(" r: %d\n", isspace('\r'));
     
}