/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:59:15 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/13 12:26:13 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number_f;
	char	number_l;

	number_f = '0';
	number_l = '9';
	while (number_f <= number_l)
	{
		write(1, &number_f, 1);
		number_f++;
	}
}
