/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh1 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:15:33 by esobrinh1         #+#    #+#             */
/*   Updated: 2022/07/25 19:09:47 by esobrinh1        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

/*int	main(void)
{
	int	x;
	int y;
	int *prt1;
	int *prt2;

	x = 24;
	y = 6;
	prt1 = &x;
	prt2 = &y;
	ft_ultimate_div_mod(prt1, prt2);
	printf("%d\n", x);
	printf("%d\n", y);
}*/
