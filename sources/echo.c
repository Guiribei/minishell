/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:20:44 by guribeir          #+#    #+#             */
/*   Updated: 2022/10/05 16:47:36 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	echo(char **str)
{
	int	i;
	int	flag;

	i = 1;
	flag = 0;
	if (!str)
	{
		ft_putchar_fd('\n', 1);
		return (0);
	}
	if (str[i] && ft_strncmp(str[i], "-n", 3) == 0)
	{
		i++;
		flag = -1;
	}
	while (str[i])
	{
		ft_putstr_fd(str[i], 1);
		ft_putchar_fd(' ', 1);
		i++;
	}
	if (flag == 0)
		ft_putchar_fd('\n', 1);
	return (0);
}
