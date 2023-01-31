/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh1 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:39:18 by esobrinh1         #+#    #+#             */
/*   Updated: 2022/07/17 17:38:26 by esobrinh1        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	i;

	i = 0;
	while (i < 26)
	{	
		ft_putchar(i + 97);
		i++;
	}
}
