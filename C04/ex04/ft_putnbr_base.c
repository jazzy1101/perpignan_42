/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:18:21 by dabae             #+#    #+#             */
/*   Updated: 2023/09/11 11:14:42 by dabae            ###   ########.fr       */
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

void	ft_putnbr(int nbr, char *base)
{
	int	len;
	
	len = ft_strlen(base);
	if (nbr >= len)
	{
		ft_putnbr(nbr / len, base);
		ft_putnbr(nbr % len, base);
	}
	else	
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_double_base(base))
	{
		if (nbr == -2147483648)
		{
			write(1, "-", 1);
			ft_putnbr(2, base);
			nbr = 147483648;
		}
		else if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr(-nbr, base);
		}
		else
			ft_putnbr(nbr, base);
	}
	else
		return ;
}

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}
