/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:33:36 by btvildia          #+#    #+#             */
/*   Updated: 2023/09/26 19:53:06 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	w;

	d = *a / *b;
	w = *a % *b;
	*a = d;
	*b = w;
}
// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 17;
// 	y = 4;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("%d\n", x);
// 	printf("%d", y);
// }
