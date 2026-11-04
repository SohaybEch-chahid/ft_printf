#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int a = printf("INT_MIN: %d\n", INT_MIN);
    int b = ft_printf("INT_MIN: %d\n", INT_MIN);

    printf("Original count: %d\n", a);
    ft_printf("Your count: %d\n", b);

    printf("Unsigned: %u\n", UINT_MAX);
    ft_printf("Unsigned: %u\n", UINT_MAX);

    printf("Hex: %x\n", 4294967295U);
    ft_printf("Hex: %x\n", 4294967295U);

    printf("Pointer: %p\n", &a);
    ft_printf("Pointer: %p\n", &a);

    printf("NULL string: %s\n", (char *)NULL);
    ft_printf("NULL string: %s\n", (char *)NULL);

    return (0);
}
