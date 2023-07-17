/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:19:16 by matesant          #+#    #+#             */
/*   Updated: 2023/06/08 16:34:09 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	d;

	i = 1;
	d = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if ((str[d] >= 'a' && str[d] <= 'z')
			|| (str[d] >= 'A' && str[d] <= 'Z')
			|| (str[d] >= '0' && str[d] <= '9'))
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] = str[i] + 32;
		}
		else if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = str[i] - 32;
		d++;
		i++;
	}
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char	str[] = "douzetr42ezas (adsa), eqw";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
} */