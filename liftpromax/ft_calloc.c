/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:33:21 by ezahiri           #+#    #+#             */
/*   Updated: 2023/11/15 09:12:24 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	d;
	char	*ptr;

	d = count * size;
	ptr = malloc(d);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, d);
	return (ptr);
}
