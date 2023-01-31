/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh1 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:34:45 by esobrinh1         #+#    #+#             */
/*   Updated: 2022/07/17 18:27:24 by esobrinh1        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int		i;

	i = 0 ;
	while (i < 10)
	{	
		ft_putchar(i + 48);
		i++;
	}
}
