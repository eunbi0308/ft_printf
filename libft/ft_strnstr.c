/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eucho <eucho@student.42.fr>                  +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:12:13 by eucho         #+#    #+#                 */
/*   Updated: 2022/10/10 16:21:56 by eucho         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		strnstr() function locates the	first occurrence of '*little' in '*big', 
		where not more than	len characters are searched.
		Characters that appear after a `\0' character are not searched.
	RETURN VALUE
		If '*little' is an empty string, '*big' is returned.
		If '*little' occurs nowhere in	'*big', NULL is returned.
		Otherwise a pointer to the first character of the first occurrence of 
		'*little' is returned.
*/
#include "libft.h"
#include<limits.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	if (len > LONG_MAX)
		len = ft_strlen(big);
	little_len = ft_strlen(little);
	while (i < len)
	{
		if (ft_strncmp(big, little, little_len) == 0)
		{
			if (len < little_len + i)
				return (NULL);
			return ((char *)big);
		}
		big++;
		i++;
	}
	return (NULL);
}
