/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:43:06 by btvildia          #+#    #+#             */
/*   Updated: 2023/09/24 19:59:37 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter_f;

	letter_f = 'a';
	while (letter_f <= 'z')
	{
		write(1, &letter_f, 1);
		letter_f++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }