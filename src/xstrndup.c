# include "libft.h"

char	*xstrndup(const char *source, size_t len)
{
	char *cpy;
	int i;

	i = 0;
	cpy = (char*)malloc(sizeof(char) * len + 1);
	if (!cpy)
		return (NULL);
	while (source[i] != '\0')
		{
			cpy[i] = source[i];
			i++;
		}
	cpy[i] = '\0';
	return (cpy);
}
