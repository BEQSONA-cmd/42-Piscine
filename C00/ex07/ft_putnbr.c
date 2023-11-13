/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:25:29 by btvildia          #+#    #+#             */
/*   Updated: 2023/09/24 20:01:06 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}

void	putnbr(int nb)
{
	if (nb < 0)
	{
		putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		putnbr(nb / 10);
	}
	putchar((nb % 10) + '0');
}

// int	main(void)
// {
// 	putnbr(42);
// 	return (0);
// }
