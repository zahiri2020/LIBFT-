/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:39:05 by ezahiri           #+#    #+#             */
/*   Updated: 2023/11/15 10:19:54 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s2;
	size_t	len_s1;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len_s1 = ft_strlen (s1);
	len_s2 = ft_strlen (s2);
	str = (char *)malloc(len_s1 + len_s2 + 1);
	if (!str)
		return (NULL);
	ft_strlcpy (str, s1, len_s1 + 1);
	ft_strlcat (str + len_s1, s2, len_s1 + len_s2 + 1);
	return (str);
}
