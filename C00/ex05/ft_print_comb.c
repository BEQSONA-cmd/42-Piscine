/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:20:33 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/13 12:26:30 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	namechar(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		putchar(a);
		putchar(b);
		putchar(c);
	}
	else
	{
		putchar(a);
		putchar(b);
		putchar(c);
		putchar(',');
		putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				namechar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
