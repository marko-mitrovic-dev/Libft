#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (s == NULL || f == NULL)
        return;


    i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}



void	my_test_func(unsigned int i, char *c)
{
	if (i % 2 == 0 && (*c >= 'a' && *c <= 'z'))
		*c = *c - 32;
}

/*
if (s == NULL || f == NULL)
        return (NULL);
        this is void function so it need just RETURN  empty no values
        */
// 3. MAIN ZA TEST
int	main(void)
{
	//char	*text = "hello world"; // this text is just for reading needs [] to be able to change it
    char	text[] = "hello world";
	
    printf("Before: %s\n", text);

	ft_striteri(text, my_test_func);

	
	printf("After: %s\n", text);

	return (0);
}