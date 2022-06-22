/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 17:42:50 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/22 21:10:59 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	char	src[] = "moeder";
	char	dest[20] = "Je";

	printf("ft: %s\n", ft_strncat(dest, src, 4));
//	printf("real: %s\n", strncat(dest, src, 4));
}*/
