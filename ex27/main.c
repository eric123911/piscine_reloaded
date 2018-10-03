/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 13:30:26 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 13:36:13 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
}

int		check_params(int ac)
{
	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (ac == 2)
		return (1);
	else
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
}

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (check_params(ac) != 1)
		return (1);
	else
	{
		fd = open(av[1], 0x0000);
		if (fd >= 0)
		{
			while ((ret = read(fd, buf, BUF_SIZE)))
				ft_putstr(buf);
			buf[ret] = '\0';
			close(fd);
		}
		return (0);
	}
}
