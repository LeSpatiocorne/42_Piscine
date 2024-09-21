#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../../includes/ft.h"

t_list	*process(char *file)
{
	long	i;
	int		fd;
	char	c[1];
	t_list	*tab;
	char	*tmp;

	fd = open(file, O_RDONLY);
	tab = malloc(sizeof(t_list) * 43);
	if (fd == -1 || !(tab))
		exit(1);
	i = 0;
	while (i < 41)
	{
		tab[i].nb = ft_atoi(ft_getnb(fd));
		read(fd, c, 1);
		while (c[0] == ' ' || c[0] == ':')
			read(fd, c, 1);
		tmp = ft_getval(fd, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	close(fd);
	return (tab);
}
