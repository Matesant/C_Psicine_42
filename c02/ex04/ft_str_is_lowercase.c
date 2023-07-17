/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:09:29 by matesant          #+#    #+#             */
/*   Updated: 2023/06/08 16:20:02 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int    main(void)
{
    int is_alpha;
    char a[] = "aaaAAAA0aaa";
    is_alpha = ft_str_is_lowercase(a);
    printf("%d\n", is_alpha);
} */