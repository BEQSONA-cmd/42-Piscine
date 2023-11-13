/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:11:35 by btvildia          #+#    #+#             */
/*   Updated: 2023/10/08 12:26:22 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 5;
// 	char a[] = "Beqsona";
// 	char b[] = "Hello World";
// 	ft_strncpy(a, b, nb);
// 	char a2[] = "Beqsona";
// 	char b2[] = "Hello World";
// 	strncpy(a2, b2, nb);
// 	printf("FT:%s\nOG:%s\n", a, a2);
// }
