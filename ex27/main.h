/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/01 20:59:20 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 13:31:02 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# define BUF_SIZE 1
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <fcntl.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		check_params(int ac);

#endif
