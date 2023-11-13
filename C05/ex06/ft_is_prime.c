/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:20:52 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/12 20:27:33 by btvildia         ###   ########.fr       */
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

// int main(void)
// {
//     printf("%d", ft_is_prime(23));
//     return(0);
// }
