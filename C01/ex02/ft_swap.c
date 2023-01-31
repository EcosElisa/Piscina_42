/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh1 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:44:36 by esobrinh1         #+#    #+#             */
/*   Updated: 2022/07/25 18:54:11 by esobrinh1        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int c = 7;
	int d = 3;
	int *a = &c;
	int *b = &d;

	ft_swap(a, b);
	printf("c deve ser igual a 7 e é: %u\n", *a);
	printf("d deve ser igual a 3 e é: %u\n", *b);
}*/
