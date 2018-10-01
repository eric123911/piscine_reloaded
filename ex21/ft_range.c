/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/01 22:24:24 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/01 23:06:06 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_absolute_diff(int min, int max)
{
	int	difference;

	difference = max - min;
	if (difference < 0)
		difference *= -1;
	return (difference);
}

int		*ft_range(int min, int max)
{
	int	i;
	int	diff;
	int	*table;

	i = 0;
	diff = ft_absolute_diff(min, max);
	table = (int*)malloc(sizeof(*table) * (diff));
	if (min >= max)
		return (NULL);
	while (i < diff)
	{
		table[i] = min;
		i++;
		min++;
	}
	table[i] = '\0';
	return (table);
}
