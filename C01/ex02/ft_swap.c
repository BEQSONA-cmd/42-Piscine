/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:11:49 by btvildia          #+#    #+#             */
/*   Updated: 2023/09/26 16:25:03 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
// int	main(void)
// {
// 	int	*a;
// 	int	*b;
// 	int	x;
// 	int	y;

// 	a = &x;
// 	b = &y;
// 	x = 1;
// 	y = 2;
// 	ft_swap(a, b);
// 	printf("%d\n", x);
// 	printf("%d", y);
// 	return (0);
// }
