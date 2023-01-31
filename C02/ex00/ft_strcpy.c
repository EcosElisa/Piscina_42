/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh1 <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:10:55 by esobrinh1         #+#    #+#             */
/*   Updated: 2022/07/28 09:11:02 by esobrinh1        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	origem[] = "String de origem.";
	char	destino[] = "String de destino.";
	char	*dest;
	
	printf("ANTES\n\torg: %s\n\tdes: %s\n", origem, destino);

	dest = ft_strcpy(destino, origem);

	printf("DEPOIS\n\torg: %s\n\tdes: %s\n", origem, destino);
	return(0);
}*/
