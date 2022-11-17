/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:48:43 by tnam              #+#    #+#             */
/*   Updated: 2022/11/17 17:46:42 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if ((unsigned int)ft_strlen(s) < start)
		return (result = "");
	result = (char *)malloc((len * sizeof(char)) + 1);
	if (result == 0)
		return (0);
	i = 0;
	while ((i < len) && (s[start] != '\0'))
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
