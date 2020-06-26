/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:03:38 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/26 09:04:34 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while	(src[index] != '\0' && index < n)
	{
		if	(index > ft_strlen(src))
		{
			dest[index] = '\0';
		}
		else
		{
			dest[index] = src[index];
		}
		index++;
	}

	return dest;
}
