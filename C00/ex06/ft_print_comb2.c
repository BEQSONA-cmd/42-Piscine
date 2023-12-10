/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:41:10 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/13 12:26:42 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	namechar2(char a, char b, char c, char d)
{
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		putchar(a);
		putchar(b);
		putchar(' ');
		putchar(c);
		putchar(d);
	}
	else
	{
		putchar(a);
		putchar(b);
		putchar(' ');
		putchar(c);
		putchar(d);
		putchar(',');
		putchar(' ');
	}
}

void	nefun(char a, char b)
{
	char	c;
	char	d;

	c = '0';
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			if (a < c || (a == c && b < d))
			{
				namechar2(a, b, c, d);
			}
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			nefun(a, b);
			b++;
		}
		a++;
	}
}
