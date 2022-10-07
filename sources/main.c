/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:13:00 by coder             #+#    #+#             */
/*   Updated: 2022/10/07 16:49:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(void)
{
	char	*prompt;
	struct sigaction	act;

	set_signals(&act);
	while (1)
	{
		prompt = set_prompt("minishell$");
		//if (prompt == NULL)
		//{
		//	ft_putchar_fd('\n', 1);
		//	return (1);
		//}	
	}
	free(prompt);
	return (0);
}
