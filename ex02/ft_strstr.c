#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if	(*str != '\0')
	{
		ft_putchar(*str);
		str++;
		ft_putstr(str);
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*substr;

	substr = (char*)malloc(sizeof*substr);

	while	(*str != '\0')
	{
		if	(*str == *to_find && (str + 1) == (to_find + 1))
		{
			*substr = *str;
			substr++;
		}
		str++;
	}

	return substr;
}

int	main(void)
{
	ft_putstr(ft_strstr("Hey I am not what you looking for!", "I am"));
	return 0;
}
