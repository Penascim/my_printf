
#include "ft_printf.h"

int ft_int(int d)
{
    char    *tempd;
    int     i;

    tempd = ft_itoa(d);
    i = ft_str(tempd);
    free(tempd);
    return (i);
    
}
/*
int main(void)
{
    int i;
    i = -12131231345223;

    ft_int(i);
}
*/