/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:22:19 by dabae             #+#    #+#             */
/*   Updated: 2023/09/11 14:11:26 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_to_lowercase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int	ft_atoi(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	
	while (str[i] >= base[0] && str[i] <= base[ft_strlen(base) - 1])
	{
		tmp = str[i] - '0';
		
		res += tmp;
	}			
	return (res * sign);
}

int	ft_double_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
                return (0);
	while (base[i])
	{
                j = i + 1;
		if (base[i] < 32 || base[i] > 126)
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
                while (base[j])
                {
                        if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}


int	ft_atoi_base(char *str, char *base)
{
	int	converted;

	if (ft_double_base)
	{
		ft_to_lowercase(str);
		ft_to_lowercase(base);
		converted = ft_atoi(*str);
	}
	else
		return (0);
	return (converted);
}
