/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh1 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:07:24 by esobrinh1         #+#    #+#             */
/*   Updated: 2022/07/28 09:12:07 by esobrinh1        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
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
/*int	main(void)
{
	char	origem[] = "String de origem.";
	char	destino[] = "String de destino.";
	char	*dest;
	unsigned int	n = 13;

	printf("ANTES\n\torg: %s\n\tdes: %s\n", origem, destino);

	dest = ft_strncpy(destino, origem, n);

	printf("DEPOIS\n\torg: %s\n\tdes: %s\n", origem, destino);
	return(0);
}*/
