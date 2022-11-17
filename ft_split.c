/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:05:32 by tnam              #+#    #+#             */
/*   Updated: 2022/11/17 19:25:31 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_str_to_null(char const *str, char c, int str_len)
{
	int		i;
	char	*str_to_null;

	str_to_null = ft_strdup(str);
	i = 0;
	while (i < str_len)
	{
		if (str_to_null[i] == c)
			str_to_null[i] = '\0';
		i++;
	}
	return (str_to_null);
}

int	ft_sub_str_count(char *str_to_null, int str_len)
{
	int	sub_str_count;
	int	i;

	sub_str_count = 0;
	i = 0;
	while (i < str_len)
	{
		if ((str_to_null[i] != '\0') && (str_to_null[i + 1] == '\0'))
			sub_str_count++;
		i++;
	}
	return (sub_str_count);
}

void	ft_split_str(char *str_to_null, int str_len, char **result)
{
	int		i;
	int		sub_str_count;
	char	*sub_str;

	i = 0;
	sub_str_count = 0;
	while (i < str_len)
	{
		if (str_to_null[i] != '\0')
		{
			sub_str = ft_strdup(&str_to_null[i]);
			result[sub_str_count++] = sub_str;
			result[sub_str_count] = 0;
			i += ft_strlen(sub_str);
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		str_len;
	int		sub_str_count;
	char	*str_to_null;
	char	**result;

	str_len = ft_strlen(s);
	str_to_null = ft_str_to_null(s, c, str_len);
	sub_str_count = ft_sub_str_count(str_to_null, str_len);
	result = (char **)malloc((sub_str_count * sizeof(char *) + sizeof(char *)));
	if (result == 0)
		return (0);
	if (sub_str_count == 0)
	{
		result[0] = 0;
		return (result);
	}
	ft_split_str(str_to_null, str_len, result);
	return (result);
}
