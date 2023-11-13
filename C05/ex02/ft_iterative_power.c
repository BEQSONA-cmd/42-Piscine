/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:21:36 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/12 15:38:30 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	while (power > 1)
	{
		i = nb * i;
		power--;
	}
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(5, 6));
// 	return (0);
// }
