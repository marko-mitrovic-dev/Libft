#include "libft.h"

int ft_isprint(int c)
{
    return (c >= 32 && c<= 126);
}

/*

int main()
{
    printf( "Is it printable 1 %d\n", ft_isprint(37));
    printf( "Is it printable 0 %d\n", ft_isprint(25));
    printf( "Is it printable 1 %d\n", ft_isprint(82));
    printf( "Is it printable 0 %d\n", ft_isprint(127));
    return(1);
}
    */
