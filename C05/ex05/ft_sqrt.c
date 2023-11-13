/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:46:29 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/12 20:26:36 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	x;

	x = nb;
	if (x <= 0)
	{
		return (0);
	}
	if (x == 1)
	{
		return (1);
	}
	i = 2;
	if (x >= 2)
	{
		while (i * i <= x)
		{
			if (i * i == x)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

// int main(void)
// {
//     printf("%d\n", ft_sqrt(7));
//     return(0);
// }
