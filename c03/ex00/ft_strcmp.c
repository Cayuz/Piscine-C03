/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 20:24:40 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/22 21:13:18 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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

/*#include <string.h>
#include <stdio.h>
int	main()
{
	char	s1[] = "Hallo";
	char	s2[] = "Hwlllp";

	ft_strcmp(s1, s2);
	printf("%i\n", ft_strcmp(s1, s2));
	printf("%i\n", strcmp(s1, s2));
}*/
