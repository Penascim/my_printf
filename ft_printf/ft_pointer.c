
#include "ft_printf.h"

int ft_pointer(void *p)
{
    int     i;
    char    *tp;
    unsigned long long tmp;

    tmp = (unsigned long long)p;
    if  (!p)
        return (ft_str("(nill)"));
    i = 0;
    tp = ft_utoa_base(tmp, 16, "0123456789abcdef");   
    i = ft_str("0x");
    i += ft_str(tp);
    free(tp);
    return (i);

}