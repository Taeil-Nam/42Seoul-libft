/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:23:17 by tnam              #+#    #+#             */
/*   Updated: 2022/11/10 17:56:04 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//----- 0 ~ 5//
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

//----- 6 ~ 10//
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void 	*ft_memmove(void *dst, const void *src, size_t len);

//----- 11 ~ 15//

int	main(void)
{
	//----- 0 ~ 5//
	printf("===ft_isalpha()===\n");
	for (int i = 0; i <= 127; i++)
	{
		printf("input = %d, result : %d\n", i, ft_isalpha(i));
	}
	printf("\n");

	printf("===ft_isdigit()===\n");
	for (int i = 0; i <= 127; i++)
	{
		printf("input = %d, result : %d\n", i, ft_isdigit(i));
	}
	printf("\n");

	printf("===ft_isalnum()===\n");
	for (int i = 0; i <= 127; i++)
	{
		printf("input = %d, result : %d\n", i, ft_isalnum(i));
	}
	printf("\n");

	printf("===ft_isascii()===\n");
	for (int i = 0; i <= 128; i++)
	{
		printf("input = %d, result : %d\n", i, ft_isascii(i));
	}
	printf("\n");

	printf("===ft_isprint()===\n");
	for (int i = 0; i <= 127; i++)
	{
		printf("input = %d, result : %d\n", i, ft_isprint(i));
	}
	printf("\n");

	//----- 6 ~ 10//
	printf("===ft_strlen()===\n");
	printf("strlen() : input = \"Hello World!\", result : %zd\n", strlen("Hello World!"));
	printf("ft_strlen() : input = \"Hello World!\", result : %zd\n", ft_strlen("Hello World!"));
	printf("\n");

	printf("===ft_memset()===\n");
	char arr_memset[] = "hello World!";
	printf("memset()_before : %s\n", arr_memset);

	memset(arr_memset, 'c', 3 * sizeof(char));
	printf("memset()_after : %s\n", arr_memset);

	char arr2_memset[] = "hello World!";
	printf("ft_memset()_before : %s\n", arr2_memset);

	ft_memset(arr2_memset, 'c', 3 * sizeof(char));
	printf("ft_memset()_after : %s\n", arr2_memset);
	printf("\n");

	printf("===ft_bzero()===\n");
	char arr_bzero[5] = {1, 2, 3, 4, 5};
	printf("bzero()_before : %d %d %d %d %d\n", arr_bzero[0], arr_bzero[1], arr_bzero[2], arr_bzero[3], arr_bzero[4]);

	bzero(arr_bzero, 3);
	printf("bzero()_after : %d %d %d %d %d\n", arr_bzero[0], arr_bzero[1], arr_bzero[2], arr_bzero[3], arr_bzero[4]);
	printf("\n");

	char arr_bzero2[5] = {1, 2, 3, 4, 5};
	printf("bzero()_before : %d %d %d %d %d\n", arr_bzero2[0], arr_bzero2[1], arr_bzero2[2], arr_bzero2[3], arr_bzero2[4]);

	bzero(arr_bzero2, 3);
	printf("bzero()_after : %d %d %d %d %d\n", arr_bzero2[0], arr_bzero2[1], arr_bzero2[2], arr_bzero2[3], arr_bzero2[4]);
	printf("\n");

	printf("===ft_memcpy()===\n");
	char arr_src_memcpy[] = "memcpy";
	char arr_dst_memcpy[7] = "";
	printf("memcpy()_before : %s\n", arr_dst_memcpy);

	memcpy(arr_dst_memcpy, arr_src_memcpy, 7 * sizeof(char));
	printf("memcpy()_after : %s\n", arr_dst_memcpy);

	char arr2_src_memcpy[] = "ft_memcpy";
	char arr2_dst_memcpy[10] = "";
	printf("ft_memcpy()_before : %s\n", arr2_dst_memcpy);

	ft_memcpy(arr2_dst_memcpy, arr2_src_memcpy, 10 * sizeof(char));
	printf("ft_memcpy()_after : %s\n", arr2_dst_memcpy);
	printf("\n");
	
	printf("===ft_memmove()===\n");
	char arr_src_memmove[] = "memmove";
	char arr_dst_memmove[8] = "";
	printf("memmove()_before : %s\n", arr_dst_memmove);

	memmove(arr_dst_memmove, arr_src_memmove, 8 * sizeof(char));
	printf("memmove()_after : %s\n", arr_dst_memmove);

	char arr2_src_memmove[] = "ft_memmove";
	char arr2_dst_memmove[11] = "";
	printf("ft_memmove()_before : %s\n", arr2_dst_memmove);

	ft_memmove(arr2_dst_memmove, arr2_src_memmove, 11 * sizeof(char));
	printf("ft_memmove()_after : %s\n", arr2_dst_memmove);
	
	return 0;
}