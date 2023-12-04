
#include "ft_printf.h"

int ft_str(char *s)
{
    unsigned int    i;

    i = 0;
    if (!s)
        s = "(null)";
    while (s[i])
        write(1, &s[i++], 1);
    return (i);
}
/*
int main(void)
{
    char    *str = "flamengo";
    ft_str(str);
}
*/