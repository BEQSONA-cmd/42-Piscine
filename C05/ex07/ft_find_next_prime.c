/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:28:52 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/13 10:20:25 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2 || nb == 3)
		return (1);
	if (nb > 3)
	{
		if (nb % 2 == 0 || nb % 3 == 0)
			return (0);
	}
	i = 5;
	while (i <= (nb / 2))
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
		{
			return (0);
		}
		i = i + 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(20));
// 	return (0);
// }
