/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_z.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 19:01:44 by frcugy            #+#    #+#             */
/*   Updated: 2015/02/19 21:14:46 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_flag_z(char *opt)
{
	int i;

	i = 0;
	while (opt[i])
	{
		if (opt[i] == 'z')
			return (1);
		i++;
	}
	return (0);
}
