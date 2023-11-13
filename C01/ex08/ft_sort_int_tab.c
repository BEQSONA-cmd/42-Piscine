/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:54:29 by btvildia          #+#    #+#             */
/*   Updated: 2023/09/28 19:47:07 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	swapped;

	while (size > 0)
	{
		i = 0;
		swapped = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				swapped = 1;
			}
			i++;
		}
		if (!swapped)
			break ;
		size--;
	}
}

// int	main(void)
// {
// 	int	tab[6] = {7, 5, 6, 3, 1, 8};
// 	int	size;

// 	size = 6;
// 	ft_sort_int_tab(tab, size);
// 	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4],
// 		tab[5]);
// 	return (0);
// }
