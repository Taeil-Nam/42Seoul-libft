/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnam <tnam@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:23:17 by tnam              #+#    #+#             */
/*   Updated: 2022/11/15 16:33:33 by tnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//===========//
// Part 1
//===========//
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

//----- 11 ~ 12//
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

//----- 13 ~ 14//
int		ft_toupper(int c);
int 	ft_tolower(int c);

//----- 15 ~ 17//
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

//----- 18 ~ 19//
void	*ft_memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);

//----- 20 ~ 21//
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);

//----- 22 ~ 23//
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

//===========//
// Part 2
//===========//
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	//===========//
	// Part 1
	//===========//	
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

	char arr2_src_memcpy[] = "memcpy";
	char arr2_dst_memcpy[7] = "";
	printf("ft_memcpy()_before : %s\n", arr2_dst_memcpy);

	ft_memcpy(arr2_dst_memcpy, arr2_src_memcpy, 7 * sizeof(char));
	printf("ft_memcpy()_after : %s\n", arr2_dst_memcpy);
	printf("\n");
	
	printf("===ft_memmove()===\n");
	char arr_src_memmove[] = "memmove";
	char arr_dst_memmove[8] = "";
	printf("memmove()_before : %s\n", arr_dst_memmove);

	memmove(arr_dst_memmove, arr_src_memmove, 8 * sizeof(char));
	printf("memmove()_after : %s\n", arr_dst_memmove);

	char arr2_src_memmove[] = "memmove";
	char arr2_dst_memmove[8] = "";
	printf("ft_memmove()_before : %s\n", arr2_dst_memmove);

	ft_memmove(arr2_dst_memmove, arr2_src_memmove, 8 * sizeof(char));
	printf("ft_memmove()_after : %s\n", arr2_dst_memmove);
	printf("\n");
	
	//----- 11 ~ 12//
	printf("===ft_strlcpy()===\n");
	char arr_src_strlcpy[] = "strlcpy";
	char arr_dst_strlcpy[8];
	printf("strlcpy()_before : %s\n", arr_dst_strlcpy);

	int return_strlcpy = strlcpy(arr_dst_strlcpy, arr_src_strlcpy, 8);
	printf("strlcpy()_after : %s\n", arr_dst_strlcpy);
	printf("strlcpy()_return : %d\n", return_strlcpy);

	char arr2_src_strlcpy[] = "strlcpy";
	char arr2_dst_strlcpy[8];
	printf("ft_strlcpy()_before : %s\n", arr2_dst_strlcpy);

	int return_ft_strlcpy = ft_strlcpy(arr2_dst_strlcpy, arr2_src_strlcpy, 8);
	printf("ft_strlcpy()_after : %s\n", arr2_dst_strlcpy);
	printf("ft_strlcpy()_return : %d\n", return_ft_strlcpy);
	printf("\n");

	printf("===ft_strlcat()===\n");
	char arr_src_strlcat[] = "!!!";
	char arr_dst_strlcat[11] = "strlcat";
	printf("strlcat()_before : %s\n", arr_dst_strlcat);

	int return_strlcat = strlcat(arr_dst_strlcat, arr_src_strlcat, 11);
	printf("strlcat()_after : %s\n", arr_dst_strlcat);
	printf("strlcat()_return : %d\n", return_strlcat);

	char arr2_src_strlcat[] = "!!!";
	char arr2_dst_strlcat[11] = "strlcat";
	printf("ft_strlcat()_before : %s\n", arr2_dst_strlcat);

	int return_ft_strlcat = ft_strlcat(arr2_dst_strlcat, arr2_src_strlcat, 11);
	printf("ft_strlcat()_after : %s\n", arr2_dst_strlcat);
	printf("ft_strlcat()_return : %d\n", return_ft_strlcat);
	printf("\n");
	
	//----- 13 ~ 14//
	printf("===ft_toupper()===\n");
	char arr_toupper[5] = {'a', 'A', 'Z', '0', '!'};
	for (int i = 0; i < 5; i++)
	{
		printf("toupper : input = %c, result = %c\n", arr_toupper[i], toupper(arr_toupper[i]));
	}
	
	for (int i = 0; i < 5; i++)
	{
		printf("ft_toupper : input = %c, result = %c\n", arr_toupper[i], ft_toupper(arr_toupper[i]));
	}
	printf("\n");

	printf("===ft_tolower()===\n");
	char arr_tolower[5] = {'a', 'A', 'Z', '0', '!'};
	for (int i = 0; i < 5; i++)
	{
		printf("tolower : input = %c, result = %c\n", arr_tolower[i], tolower(arr_tolower[i]));
	}
	for (int i = 0; i < 5; i++)
	{
		printf("ft_tolower : input = %c, result = %c\n", arr_tolower[i], ft_tolower(arr_tolower[i]));
	}
	printf("\n");
	
	//----- 15 ~ 17//
	printf("===ft_strchr()===\n");
	char arr_strchr[] = "1234567895";
	printf("strchr : str = \"1234567895\", find = 5, result = %p\n", strchr(arr_strchr, '5'));
	printf("ft_strchr : str = \"1234567895\", find = 5, result = %p\n", ft_strchr(arr_strchr, '5'));
	printf("\n");

	printf("===ft_strrchr()===\n");
	char arr_strrchr[] = "1234567895";
	printf("strrchr : str = \"1234567895\", find = 5, result = %p\n", strrchr(arr_strrchr, '5'));
	printf("ft_strrchr : str = \"1234567895\", find = 5, result = %p\n", ft_strrchr(arr_strrchr, '5'));
	printf("\n");

	printf("===ft_strncmp()===\n");
	char arr1_strncmp[] = "12345";
	char arr2_strncmp[] = "123";
	printf("strncmp : str1 = \"12345\", str2 = \"123\", result = %d\n", strncmp(arr1_strncmp, arr2_strncmp, 5));
	printf("ft_strncmp : str1 = \"12345\", str2 = \"123\", result = %d\n", ft_strncmp(arr1_strncmp, arr2_strncmp, 5));
	printf("\n");
	
	//----- 18 ~ 19//
	printf("===ft_memchr()===\n");
	char arr_memchr[] = "hello World!";
	printf("memchr()_input : %s, find : 'o'\n", arr_memchr);
	printf("memchr()_return : %p\n", memchr(arr_memchr, 'o', strlen(arr_memchr)));

	printf("ft_memchr()_input : %s, find : 'o'\n", arr_memchr);
	printf("ft_memchr()_return : %p\n", ft_memchr(arr_memchr, 'o', strlen(arr_memchr)));
	printf("\n");

	printf("===ft_memcmp()===\n");
	printf("memcmp()_input : s1 = %s, s2 = %s\n", "hello World!", "hello World!");
	printf("memcmp()_return : %d\n", memcmp("hello World!", "hello World!", 13));
	
	printf("ft_memcmp()_input : s1 = %s, s2 = %s\n", "hello World!", "hello World!");
	printf("ft_memcmp()_return : %d\n", memcmp("hello World!", "hello World!", 13));
	printf("\n");

	//----- 20 ~ 21//
	printf("===ft_strnstr()===\n");
	char arr_strnstr1[] = "12345";
	char arr_strnstr2[] = "45";
	printf("strnstr()_input : s1 = %s, s2 = %s\n", arr_strnstr1, arr_strnstr2);
	printf("strnstr()_return : %p\n", strnstr(arr_strnstr1, arr_strnstr2, 5));
	printf("ft_strnstr()_input : s1 = %s, s2 = %s\n", arr_strnstr1, arr_strnstr2);
	printf("ft_strnstr()_return : %p\n", ft_strnstr(arr_strnstr1, arr_strnstr2, 5));
	printf("\n");

	printf("===ft_atoi()===\n");
	char arr_atoi1[] = "seoul";
	char arr_atoi2[] = "42";
	char arr_atoi3[] = "42seoul";
	char arr_atoi4[] = "seoul42";
	char arr_atoi5[] = "+42";
	char arr_atoi6[] = "-42";
	char arr_atoi7[] = "++42";
	char arr_atoi8[] = "--42";
	printf("atoi()_input : s1 = %s, s2 = %s, s3 = %s, s4 = %s, s5 = %s, s6 = %s, s7 = %s, s8 = %s\n",
	arr_atoi1, arr_atoi2, arr_atoi3, arr_atoi4, arr_atoi5, arr_atoi6, arr_atoi7, arr_atoi8);
	printf("atoi()_return : s1 = %d, s2 = %d, s3 = %d, s4 = %d, s5 = %d, s6 = %d, s7 = %d, s8 = %d\n",
	atoi(arr_atoi1), atoi(arr_atoi2), atoi(arr_atoi3), atoi(arr_atoi4), atoi(arr_atoi5), atoi(arr_atoi6), atoi(arr_atoi7), atoi(arr_atoi8));

	printf("ft_atoi()_input : s1 = %s, s2 = %s, s3 = %s, s4 = %s, s5 = %s, s6 = %s, s7 = %s, s8 = %s\n",
	arr_atoi1, arr_atoi2, arr_atoi3, arr_atoi4, arr_atoi5, arr_atoi6, arr_atoi7, arr_atoi8);
	printf("ft_atoi()_return : s1 = %d, s2 = %d, s3 = %d, s4 = %d, s5 = %d, s6 = %d, s7 = %d, s8 = %d\n",
	ft_atoi(arr_atoi1), ft_atoi(arr_atoi2), ft_atoi(arr_atoi3), ft_atoi(arr_atoi4), ft_atoi(arr_atoi5), ft_atoi(arr_atoi6), ft_atoi(arr_atoi7), ft_atoi(arr_atoi8));
	printf("\n");

	//----- 22 ~ 23//
	printf("===ft_calloc()===\n");
	int *calloc1 = (int *)calloc(5, sizeof(int)); //할당
    printf("calloc(5, sizeof(int)) : %d %d %d %d %d\n", calloc1[0], calloc1[1], calloc1[2], calloc1[3], calloc1[4]);
    
    int *calloc2 = (int *)ft_calloc(5, sizeof(int)); //할당
    printf("ft_calloc(5, sizeof(int)) : %d %d %d %d %d\n", calloc2[0], calloc2[1], calloc2[2], calloc1[3], calloc1[4]);
	free(calloc1); //메모리 해제
    free(calloc2); //메모리 해제
	printf("\n");

	printf("===ft_strdup()===\n");
	char arr_strdup[] = "strdupTEST";
	printf("strdup() input : %s, result = %s\n", arr_strdup, strdup(arr_strdup));
	printf("ft_strdup() input : %s, result = %s\n", arr_strdup, ft_strdup(arr_strdup));
	printf("\n");

	//===========//
	// Part 2
	//===========//
	printf("===ft_substr()===\n");
	char arr_substr[] = "substrTEST";
	printf("ft_substr() input : %s, result = %s\n", arr_substr, ft_substr(arr_substr, 6, 4));
	printf("\n");

	printf("===ft_strjoin()===\n");
	char arr_strjoin1[] = "strjoin";
	char arr_strjoin2[] = "TEST";
	printf("ft_strjoin(\"%s\", \"%s\") : result = %s\n", arr_strjoin1, arr_strjoin2, ft_strjoin(arr_strjoin1, arr_strjoin2));

	printf("===ft_strtrim()===\n");

	return 0;
}