/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:46:00 by dabae             #+#    #+#             */
/*   Updated: 2023/09/05 11:35:57 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb > 1)
	{
		while (i < nb && nb % i != 0)
			i++;
		if (nb == i)
			return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	
	printf("9: %d\n", ft_is_prime(9));
	printf("3: %d\n", ft_is_prime(3));
	printf("11: %d\n", ft_is_prime(11));
	printf("80: %d\n", ft_is_prime(80));
	printf("0: %d\n", ft_is_prime(0));
	return (0);
}
*/
