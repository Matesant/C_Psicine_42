/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 10:01:42 by matesant          #+#    #+#             */
/*   Updated: 2023/06/12 13:18:52 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + d] == to_find[d] && str[i + d] != '\0')
		{
			d++;
			if (to_find[d] == '\0')
				return (str + i);
		}
		i++;
		d = 0;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char str1[100] = "sou eu chapolim colorado!";
	char to_find_find[100] = "ch";

	printf("palheiro: %s\n\n", str1);
	printf("agulha: %s\n\n", ft_strstr(str1, to_find_find));
}*/