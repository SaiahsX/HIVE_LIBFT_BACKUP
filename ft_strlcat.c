/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:51:17 by oadewumi          #+#    #+#             */
/*   Updated: 2023/11/13 18:39:23 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This function copies src & apppends it at end of dst (concactenation)	*/
/*	The result is then null terminated.	*/
/*	The logic of this function is to do ft_strlen on 'src' & 'dst'....	*/
/*	Also, we need to calculate the remaining space left by the dstsize
for src to occupy, hence, 'space_for_src = dstsize - dstlen - 1', 
this we will set as a limiter for the function.	*/
/*	In this function, I began to utilise my premade function ft_strlen. 	*/
/*	Also I began to use my header file 'libft.h'	*/
/*	This meant I had to typecast the source type from const char to char 
in this function, to make it match the called function variable	*/
/*	In this function, the return values vary in the sense that if the 
if the dstlen is larger than dstsize, we get the sum of dstsize & srclen 
as return values and nothing from source is copied as a result.	*/
/*	Otherwise, we get the sum of the dstlen & srclen and some copied string	*/
/*	This function imitates the behaviour of the standard Clibrary function 
strlcat	*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	src_i;
	size_t	space_for_src;
	char	*source;

	src_i = 0;
	source = (char *) src;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(source);
	if (dstlen > dstsize)
		return (dstsize + srclen);
	space_for_src = dstsize - dstlen - 1;

	while (source[src_i] != '\0' && src_i < space_for_src)
	{
		dst[dstlen + src_i] = source[src_i];
		src_i++;
	}
	dst[dstlen + src_i] = '\0';
	return (dstlen + srclen);
}
/*   
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	d[70] = "Hello, you are doing alright";
	char	s[] = ",_yes it is true";
	int	t = 32;

	printf("%zu\n", ft_strlcat(d, s, t));
	printf("%s\n", d);

	char	dx[70] = "Hello, you are doing alright";
	char	sx[] = ",_yes it is true";
	int		tx = 32;

	int		a = strlcat(dx, sx, tx);

	printf("%d\n", a);
	printf("%s\n", dx);

} */