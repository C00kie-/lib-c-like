
#include "libft.h"


char *ft_strndup(const char *src, size_t size)
{
	char *str;

	str = malloc(sizeof(size) + 1);
	ft_strncpy(str, src, size);
	str[size] = '\0';
	return (str);
}
