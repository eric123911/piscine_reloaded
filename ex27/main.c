/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/01 20:56:17 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/01 22:31:27 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.h"

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	if (check_par(ac))
		return (0);
	else
	{
		fd = open(av[1], 0x0000);
		if (fd >= 0)
		{
			while ((ret = read(fd, buf, BUF_SIZE)))
				ft_putstr_fd(1, buf);
			buf[ret] = '\0';
			close(fd);
		}
	}
	return (0);
}
