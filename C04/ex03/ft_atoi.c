/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:18:21 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/10 18:49:28 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	x;
	int	s;

	i = 0;
	x = 0;
	s = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			s = s * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x * s);
}

// int	main(int ac, char **av)
// {
// 	int	i;

// 	i = 0;
// 	if (ac == 2)
// 	{
// 		printf("%d", ft_atoi(&av[1][i]));
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	char a[] = "    --+++-+-++---+12sd213123";
// 	printf("%d", ft_atoi(a));
// 	return (0);
// }
