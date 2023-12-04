
#include "ft_printf.h"

int ft_u(unsigned int u)
{
    int     i;
    char    *tu;

    tu = ft_utoa_base(u, 10, "0123456789");
    i = ft_str(tu);
    free(tu);
    return (i);
}