/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:40:57 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/08 12:48:15 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	char s1[] = "HelloWorld";
// 	char s2[] = "Hello";
// 	a = ft_strncmp(s1, s2, 7);
// 	b = strncmp(s1, s2, 7);
// 	printf("%d \n", a);
// 	printf("%d", b);
// 	return (0);
// }
