/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:03:26 by dabae             #+#    #+#             */
/*   Updated: 2023/09/12 17:08:03 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	z;

	if (!to_find)
		return (str);
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			z = 1;
			while (to_find[z] != '\0' && (str[j + z] == to_find[z]))
				++z;
			if (to_find[z] == '\0')
				return (&str[j]);
		}
		++j;
	}
	return (0);
}
