/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:05:53 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/08 12:48:21 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	if (to_find[x] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
		{
			x++;
		}
		if (to_find[x] == '\0')
		{
			return (str + i);
		}
		i++;
		x = 0;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*c;
// 	char a[] = "paulo is stupid boy";
// 	char b[] = "stupid";
// 	c = strstr(a, b);
// 	printf("%s\n", b);
// 	printf("%ld\n", c - a);
// 	return (0);
// }
