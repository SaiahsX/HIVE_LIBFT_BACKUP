/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:28:55 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/28 21:01:36 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_substr_poll(char const *str, char c)
{
	int	count;
	int	in_substring;

	count = 0;
	in_substring = 0;

	while (*str)
	{
		if (*str && *str != c && in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		else if (*str == c && in_substring > 0)
		{
			in_substring = 0;
		}
		str++;
	}
	return (count);
}

static char	**ft_free_function(char **s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		free (s[i]);
		i++;
	}
	free (s);
	return (0);
}

static char	**ft_filling_substr(char **split_res, char const *s, char c)
{
	size_t	start;
	size_t	len;
	size_t	j;

	start = 0;
	j = 0;
	while (s[start] != '\0' && j < (ft_substr_poll(s, c)))
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		len = start;
		while (s[len] != c && s[len] != '\0')
			len++;
		split_res[j] = ft_substr(s, start, (len - start + 1));
		if (!split_res[j])
			return (ft_free_function(split_res));
		j++;
		start = len;
	}
	split_res[j++] = NULL;
	return (split_res);
}

char	**ft_split(char const *s, char c)
{
	char	**split_res;

	split_res = (char **)malloc((ft_substr_poll(s, c) + 1) * sizeof(char *));

	if (!split_res)
		return (0);

	split_res = ft_filling_substr(split_res, s, c);
	return (split_res);
}



#include <stdio.h>

int	main(void)
{
	char const	str[] = "lorem ipsum dolor sit amet, 4664649 consectetur adipiscing elit. Sed non risus. Suspendisse";
	char		d;
	char		**res;

	d = ' ';
	res = ft_split(str, d);
	while (*res != 0)
	{
		printf("%s\n", *res);
		res++;
	}
}
// int    main(void)
// {
//     int i = 0;
//     char **test;
//     char	*str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
//     test = ft_split(str, ' ');
//     while (i < (int)ft_strlen(str))
//     {
//         printf("\nft_split[0]:%s\n", test[i]);
//         i++;
//     }
//     // printf("\nft_split[0]:%s\n", test[0]);
//     // printf("\nft_split[1]:%s\n", test[1]);
//     // printf("\nft_split[2]:%s\n", test[2]);
//     // printf("\nft_split[3]:%s\n", test[3]);
//     // printf("\nft_split[4]:%s\n", test[4]);

//     // printf("\nft_split[5]:%s\n", test[5]);
//     // printf("\nft_split[6]:%s\n", test[6]);
//     // printf("\nft_split[7]:%s\n", test[7]);
//     // printf("\nft_split[8]:%s\n", test[8]);

//     printf("\nft_split[null]:%s\n", test[i]);

//     return (0);
// }