/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 12:01:11 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/26 12:01:15 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*substr;
	char	*tmp_substr;

	substr = (char*)malloc(sizeof*substr);
	while	(*str != '\0')
	{
		tmp_substr = (char*)malloc(sizeof*tmp_substr);

		while	(*str == *to_find && *to_find != '\0')
		{
			*substr = *str;
			str++;
			to_find++;
			substr++;
			//ft_strstr(str, to_find);
		}
		
		str++;
	}

	return substr;
}
