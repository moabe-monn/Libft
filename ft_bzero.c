/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:41:09 by moabe             #+#    #+#             */
/*   Updated: 2025/05/23 12:51:43 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buf, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = buf;
	i = 0;
	while (i < n)
	{
		*(p + i) = '\0';
		i++;
	}
}


