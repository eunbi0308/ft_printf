/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eucho <eucho@student.42.fr>                  +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:09:04 by eucho         #+#    #+#                 */
/*   Updated: 2022/10/11 19:54:33 by eucho         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIPTION
		memmove() copies n characters from src to dst, 
		but for overlapping memory blocks,
		memmove is safer approach than memcpy. 
		memmove() uses buffer to copy source.
		if dst <= src, copy from the beginning 'len' characters to 'dst'.
		if dst > src, copy from the end(of len). 
		because if the beginning address of 'src' is located before the address
		of 'dst', it can be overlapped.
	RETURN VALUE
		A pointer to the dst.
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const char		*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (NULL);
	if (dst <= src)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		while (len--)
		{
			*(d + len) = *(s + len);
		}
	}	
	return (dst);
}
