/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 08:21:31 by dabae             #+#    #+#             */
/*   Updated: 2023/09/06 11:25:02 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	len;

	i = 0;
	len = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[len - i];
		tab[len - i] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int	main()
{
	int	i;

	int	arr[] = {1,2,3,4,5,6,7,8};
	int	arr1[] = {1,2,3,4,5,6,7,8,9};
	int	arr2[] = {1,2,3,4,5,6,7,8,9,0};

	ft_rev_int_tab(arr, 8);
	ft_rev_int_tab(arr1, 9);
	ft_rev_int_tab(arr2, 10);
	i = 0;
	while (arr[i])
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	i = 0;
        while (arr1[i])
	{
		printf("%d", arr1[i]);
		i++;
	}
	i = 0;
	printf("\n");
        while (arr2[i])
	{
		printf("%d", arr2[i]);
		i++;
	}
	return (0);
}
*/
