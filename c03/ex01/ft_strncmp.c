/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 15:36:37 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/22 21:14:08 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				o;

	i = 0;
	o = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			o = s1[i] - s2[i];
			return (o);
		}
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	printf("ft: %i\n", ft_strncmp("Hallo", "Hallo", 4));
	printf("real: %i", strncmp("Hallo", "Hallo", 4));
}*/
