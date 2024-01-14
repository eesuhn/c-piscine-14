/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:04:52 by yilim             #+#    #+#             */
/*   Updated: 2024/01/14 17:11:48 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			i *= 10;
			i += (*str - '0');
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (i);
}
