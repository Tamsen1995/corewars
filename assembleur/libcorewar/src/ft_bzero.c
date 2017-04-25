/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 16:53:16 by vijacque          #+#    #+#             */
/*   Updated: 2016/10/11 16:53:17 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libcorewar.h>

void		ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*cps;

	cps = (char*)s;
	i = 0;
	while (i < n)
	{
		cps[i] = '\0';
		i++;
	}
}