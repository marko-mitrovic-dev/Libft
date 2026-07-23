#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;

    if (s1 == NULL || set == NULL)
		return (NULL);

    start = 0;
    while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;

end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;


    return (ft_substr(s1, start, (end - start) + 1));
}
int main ()
{
    char s1[] = "xxxMARKOxxx";
    char x[] = "x";

    printf("this is the new trimmed string %s \n", ft_strtrim(s1, x));
    return (0);
}

