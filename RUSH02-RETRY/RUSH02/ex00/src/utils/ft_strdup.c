#include "../../includes/ft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	while (src[len] != '\0')
		len++;
	if (!(dest))
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
