/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:15:57 by dabae             #+#    #+#             */
/*   Updated: 2023/08/29 10:04:51 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(*str)
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	len_dest;
	int	len_src;

	len_dest = ft_strlen(*dest);
	len_src = ft_strlen(*src);

	if (size > 0 && len_dest > size)
	{
		if ((dest[len_dest + 1] == '\0') &&( src[len_src] == '\0'))
		{
			

	return (len_dest + );

