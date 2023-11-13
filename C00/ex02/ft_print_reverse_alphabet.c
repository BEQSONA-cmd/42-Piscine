/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:02:05 by btvildia          #+#    #+#             */
/*   Updated: 2023/09/24 19:50:15 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	last;
	char	first;

	last = 'z';
	first = 'a';
	while (first <= last)
	{
		write(1, &last, 1);
		last--;
	}
}
// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
