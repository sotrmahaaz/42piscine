/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:28:45 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/15 16:33:29 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac != 1)
	{
		while (i < ac)
		{
			while (*av[i])
				write(1, av[i]++, 1);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
