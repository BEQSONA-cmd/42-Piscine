/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:39:15 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/12 16:44:35 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power > 1)
	{
		i = nb * (ft_recursive_power(nb, power - 1));
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
// 	printf("%d", ft_recursive_power(4, 2));
// 	return (0);
// }
