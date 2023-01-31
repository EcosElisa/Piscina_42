/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh1 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:40:44 by esobrinh1         #+#    #+#             */
/*   Updated: 2022/07/25 19:08:24 by esobrinh1        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int main()
{
	int a = 4;
	int b = 9;
	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);

	printf("%d\n", *div);
	printf("%d\n", *mod);
}*/
