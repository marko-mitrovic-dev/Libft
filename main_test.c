#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("isalpha('a') = %d\n", ft_isalpha('a'));  // 1
    printf("isalpha('1') = %d\n", ft_isalpha('1'));  // 0
    printf("isdigit('5') = %d\n", ft_isdigit('5'));  // 1
    printf("isdigit('z') = %d\n", ft_isdigit('z'));  // 0
    return (0);
}