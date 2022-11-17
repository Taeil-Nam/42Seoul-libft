/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:26:22 by tnam              #+#    #+#             */
/*   Updated: 2022/11/17 15:37:47 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	void		*result;

	result = 0;
	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == c)
		{
			result = (void *)&s[i];
			break ;
		}
		i++;
	}
	return (result);
}
