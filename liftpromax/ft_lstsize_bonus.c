/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:16:08 by ezahiri           #+#    #+#             */
/*   Updated: 2023/11/17 10:06:55 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	sz;

	if (!lst)
		return (0);
	sz = 0;
	while (lst)
	{
		sz++;
		lst = lst -> next;
	}
	return (sz);
}
