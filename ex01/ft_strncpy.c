/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:03:38 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/26 11:39:35 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while	(index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	while	(index < n)
	{
		dest[index] = '\0';
		index++;
	}
	

	return dest;
}
