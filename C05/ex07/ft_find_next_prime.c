/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:24:15 by dabae             #+#    #+#             */
/*   Updated: 2023/09/05 15:49:18 by dabae            ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb <= 2)
		return (2);
	if (nb > 2)
	{
		while (!ft_is_prime(nb + i))
			i++;
		return (nb + i);
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{

	printf("0:%d\n", ft_find_next_prime(1));
	printf("6:%d\n", ft_find_next_prime(604));
	printf("3:%d\n", ft_find_next_prime(1000));
	printf("71:%d\n", ft_find_next_prime(71));
	printf("72:%d\n", ft_find_next_prime(72));
	printf("10:%d\n", ft_find_next_prime(2506832));
	return (0);
}
*/
