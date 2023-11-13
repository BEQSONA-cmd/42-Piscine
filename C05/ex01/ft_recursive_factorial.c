/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:08:24 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/12 15:25:29 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		i = i * (nb * (ft_recursive_factorial(nb - 1)));
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
// 	printf("%d", ft_recursive_factorial(3));
// 	return (0);
// }
