/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:56:38 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/08 12:48:14 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i = i + 1;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	int	b;
// 	int	c;

// 	char st1[] = "AA";
// 	char st2[] = "AC";
// 	b = strcmp(st1, st2);
// 	c = ft_strcmp(st1, st2);
// 	printf("%d \n", b);
// 	printf("%d", c);
// 	return (0);
// }
