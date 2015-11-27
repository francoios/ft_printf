/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_#.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 14:05:34 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/19 21:14:53 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_flag_dieze(char *opt)
{
	int i;

	i = 0;
	while (opt[i])
	{
		if (opt[i] == '#')
			return (1);
		i++;
	}
	return (0);
}