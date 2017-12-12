/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishchen <rishchen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 15:54:35 by rishchen          #+#    #+#             */
/*   Updated: 2017/01/18 16:56:35 by rishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_putstr(char const *s)
{
	int	i;

	if (s != NULL)
	{
		i = ft_strlen(s);
		write(1, s, i);
	}
}
