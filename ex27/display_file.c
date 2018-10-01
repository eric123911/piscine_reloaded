/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   display_file.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/01 20:53:19 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/01 23:08:25 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.h"

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

void	ft_putstr_fd(int fd, char *s)
{
	write(fd, s, ft_strlen(s));
}

int		check_par(int ac)
{
	if (ac < 2)
	{
		ft_putstr_fd(2, "File name missing.");
		return (1);
	}
	else if (ac > 2)
	{
		ft_putstr_fd(2, "Too many arguments.");
		return (1);
	}
	else
		return (0);
}
