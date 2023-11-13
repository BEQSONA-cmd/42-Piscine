/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:57:31 by btvildia          #+#    #+#             */
/*   Updated: 2023/09/26 17:58:55 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*div;
// 	int	*mod;
// 	int	x;
// 	int	y;

// 	div = &x;
// 	mod = &y;
// 	a = 15;
// 	b = 4;
// 	ft_div_mod(a, b, div, mod);
// 	printf("%d\n", x);
// 	printf("%d", y);
// }
