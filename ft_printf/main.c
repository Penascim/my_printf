
#include "ft_printf.h"

int main(void)
{
    char c = '*';
    void *p;
    p = &c;

    ft_pointer(p);
    printf("\n%p", p);
}