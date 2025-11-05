#include <stdio.h>

int     isalnum(int c)
{
        if(c >= '0' && '9' || c >= 'a' && c <= 'z'
            || c >= 'A' && c <= 'Z')
           return 1;
        else
            return 0;
}

int main(void)
{
    int noalnum = '\n';
    int space = ' ';
    int alpha = 'a';
    int al = 'Z';
    int num = '2';
    int nonum = 10;

    printf("noalnum : %d\n", isalnum(noalnum));
    printf("space : %d\n", isalnum(space));
    printf("alpha : %d\n", isalnum(alpha));
    printf("al : %d\n", isalnum(al));
    printf("num : %d\n", isalnum(num));
    printf("nonum : %d\n", isalnum(nonum));



}