/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupatric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:57:36 by gupatric          #+#    #+#             */
/*   Updated: 2019/07/16 18:07:48 by gupatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

char		*ft_malloc_tab(int size, char **strs, char *sep, char **tab)
{
	int		i;
	int		j;
	int		count;

	if (size == 0)
		return (*tab = malloc(sizeof(char) * 0));
	count = (size - 1) * (ft_strlen(sep));
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		count += j;
		i++;
	}
	if (!(*tab = malloc((count * sizeof(char)) + 1)))
		return (NULL);
	return (*tab);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	if (!(ft_malloc_tab(size, strs, sep, &tab)))
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		j = 0;
		i++;
		while (i < size && sep[j])
			tab[k++] = sep[j++];
	}
	tab[k] = 0;
	return (tab);
}
