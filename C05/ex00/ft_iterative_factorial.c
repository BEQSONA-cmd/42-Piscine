/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:51:09 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/12 15:25:22 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(10));
// 	return (0);
// }
