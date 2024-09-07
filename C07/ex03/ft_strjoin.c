#include <string.h>
#include <unistd.h>

int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str)
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	len;
	char	*str;

	len = ft_strlen(strs);
	str = malloc((len + 1) * sizeof(char));
}
