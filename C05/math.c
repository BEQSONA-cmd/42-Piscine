/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:18:09 by btvildia          #+#    #+#             */
/*   Updated: 2023/12/10 21:49:14 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

unsigned long long	ft_strlen(char *a)
{
	unsigned long long	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	unsigned long long	x;
	unsigned long long	y;
	unsigned long long	i;
	char				*a;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	x = ft_strlen((char *)s1);
	y = ft_strlen((char *)s2);
	a = malloc(x + y + 1);
	if (!a)
		return (NULL);
	while (s1[i] != '\0' && i < (x + y + 1))
	{
		a[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		a[x + i] = s2[i];
		i++;
	}
	a[x + i] = '\0';
	return (a);
}

unsigned long	ft_int_lent(unsigned long long nb)
{
	unsigned long long	s;

	if (nb == 0)
	{
		return (1);
	}
	s = 0;
	if (nb < 0)
	{
		s = 1;
	}
	while (nb)
	{
		s++;
		nb = nb / 10;
	}
	return (s);
}

char	*ft_itoa(unsigned long long n)
{
	unsigned long long	i;
	char				*a;
	unsigned long long	x;

	x = ft_int_lent(n);
	a = malloc((x + 1) * sizeof(char));
	if (!a)
		return (NULL);
	if (n < 0)
	{
		a[0] = '-';
		i = -n;
	}
	else
	{
		i = n;
	}
	a[x - 1] = '0';
	a[x] = '\0';
	while (i)
	{
		a[--x] = (i % 10) + '0';
		i = i / 10;
	}
	return (a);
}

unsigned long long	ft_char_atoi(char a)
{
	unsigned long long	x;

	x = 0;
	if (a >= '0' && a <= '9')
	{
		x = a - '0';
	}
	return (x);
}

unsigned long long	ft_atoi(const char *str)
{
	unsigned long long	i;
	unsigned long long	x;
	unsigned long long	s;

	i = 0;
	x = 0;
	s = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x * s);
}

unsigned long long	*ft_split(char *a)
{
	unsigned long long	*c;
	unsigned long long	i;

	i = 0;
	c = malloc(ft_strlen(a) * sizeof(int));
	while (i < ft_strlen(a))
	{
		c[i] = ft_char_atoi(a[i]);
		i++;
	}
	return (c);
}

char	*ft_upside(char *a)
{
	unsigned long long	len;
	unsigned long long	i;
	char				*str;

	len = ft_strlen(a);
	i = 0;
	str = malloc(len + 1);
	while (i < len)
	{
		str[i] = a[len - i - 1];
		i++;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_times(char *a, char *b)
{
	char				*answer;
	unsigned long long	*c;
	int					s;
	int					i;
	char				*x;
	int					g;

	answer = NULL;
	c = NULL;
	g = 0;
	i = ft_strlen(b);
	s = ft_char_atoi(*a);
	answer = malloc(1024);
	c = ft_split(b);
	while (i > 0)
	{
		x = ft_itoa((s * c[i - 1] + g) % 10);
		g = (s * c[i - 1] + g) / 10;
		answer = ft_strjoin(answer, x);
		free(x);
		i--;
	}
	while (g > 0)
	{
		x = ft_itoa(g % 10);
		answer = ft_strjoin(answer, x);
		free(x);
		g /= 10;
	}
	answer = ft_upside(answer);
	free(c);
	return (answer);
}

char	*ft_power(char *a, char *b)
{
	unsigned long long	y;
	char				*answer;
	unsigned long long	i;

	y = ft_atoi(b);
	answer = a;
	i = 0;
	while (i < y - 1)
	{
		answer = ft_times(a, answer);
		i++;
	}
	return (answer);
}

char	*ft_getline(int fd)
{
	ssize_t	i;
	ssize_t	byte;
	char	*a;
	char	buff[4098];

	i = 0;
	byte = 1;
	a = malloc(sizeof(buff));
	while (byte > 0)
	{
		byte = read(fd, buff, 1);
		if (buff[0] == '\n')
		{
			break ;
		}
		a[i] = buff[0];
		i++;
	}
	return (a);
}

int	main(void)
{
	char	*a;
	char	*b;
	char	*c;

	a = ft_getline(1);
	b = ft_getline(1);
	printf(GREEN "sheni ricxvi: " RESET);
	printf("%s\n", a);
	usleep(300000);
	printf(GREEN "misi xarisxi: " RESET);
	printf("%s\n", b);
	usleep(300000);
	printf(GREEN "pasuxi: " RESET);
	c = ft_power(a, b);
	printf("%s\n", c);
	free(a);
	free(b);
	return (0);
}
