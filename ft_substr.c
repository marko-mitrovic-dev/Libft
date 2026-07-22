#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"



char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*sub;
	size_t	s_len;

	if (s == NULL)
		return (NULL);

	s_len = ft_strlen(s);

	if (start >= s_len)
	{
		sub = malloc(1 * sizeof(char));
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
	}

}