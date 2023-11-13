/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:33:48 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/11 20:24:20 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

int	is_valid_base(char *a)
{
	int	i;
	int	j;

	if (!a || !a[0] || !a[1])
		return (0);
	i = 0;
	while (a[i])
	{
		if (a[i] == '+' || a[i] == '-')
			return (0);
		j = i + 1;
		while (a[j])
		{
			if (a[i] == a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(long long int nbr, char *base)
{
	int	len;

	if (!is_valid_base(base))
	{
		return ;
	}
	len = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
	}
	write(1, &base[nbr % len], 1);
}

// int	main(void)
// {
// 	int	i;

// 	char a[] = "abcd";
// 	i = 12;

// 	ft_putnbr_base(i, a);
// 	write(1, "\n", 1);
// 	return (0);
// }
