#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int a = ft_printf("abcd%");
    ft_printf ("\n");
    int b = printf("efgh%");
    printf("a=%d\nb=%d\n", a, b); 
    return (0);
}
