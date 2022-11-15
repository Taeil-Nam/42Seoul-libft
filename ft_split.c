/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:05:32 by tnam              #+#    #+#             */
/*   Updated: 2022/11/15 19:46:11 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_change_to_null(char *str, char *charset, int str_len)
{
	int		i;
	int		j;
	char	*str_to_null;

	i = 0;
	j = 0;
	str_to_null = (char *)malloc(sizeof(char) * str_len + 1);
	if (str_to_null == 0)
		return (0);
	while (i < str_len)
	{
		str_to_null[i] = str[i];
		while (charset[j] != '\0')
		{
			if (str[i] == charset[j++])
			{
				str_to_null[i] = '\0';
				break ;
			}
		}
		j = 0;
		i++;
	}
	str_to_null[str_len] = '\0';
	return (str_to_null);
}

int	ft_str_count(char *str_to_null, int str_len)
{
	int	i;
	int	str_count;

	i = 0;
	str_count = 0;
	while (i < str_len)
	{
		if (str_to_null[i] != '\0' && str_to_null[i + 1] == '\0')
			str_count += 1;
		i++;
	}
	return (str_count);
}

void	ft_div_str(char **result, char *str_to_null, int total_len, int i)
{
	int	row;
	int	col;
	int	str_len;

	row = 0;
	col = 0;
	str_len = 0;
	while (i <= total_len)
	{
		if (str_to_null[i] != '\0')
			str_len += 1;
		if (i != 0 && str_to_null[i] == '\0' && str_to_null[i - 1] != '\0')
		{
			result[row] = (char *)malloc(sizeof(char) * str_len + 1);
			if (result[row] == 0)
				return ;
			while (i - str_len < i)
				result[row][col++] = str_to_null[i - str_len--];
			result[row++][col] = '\0';
			col = 0;
			str_len = 0;
		}
		i++;
	}
	result[row] = 0;
}

char	**ft_split(char *str, char *charset)
{
	int		str_len;
	int		str_count;
	char	*str_to_null;
	char	**result;

	str_len = ft_strlen(str);
	str_to_null = ft_change_to_null(str, charset, str_len);
	str_count = ft_str_count(str_to_null, str_len);
	if (str_count == 0)
	{
		result = (char **)malloc(1);
		if (result == 0)
			return (0);
		*result = 0;
		return (result);
	}
	result = (char **)malloc(sizeof(char *) * str_count + 1);
	if (result == 0)
		return (0);
	ft_div_str(result, str_to_null, str_len, 0);
	return (result);
}
