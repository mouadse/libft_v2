/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msennane <msennane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:15:10 by msennane          #+#    #+#             */
/*   Updated: 2023/11/05 20:19:15 by msennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	value;

	value = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		((char *)b)[i] = value;
		i++;
	}
	return (b);
}
