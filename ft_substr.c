/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:51:12 by sahafid           #+#    #+#             */
/*   Updated: 2021/11/07 12:24:03 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *nullcase(void)
{
	char	*b;
	size_t	i;
	size_t	o;

	i = 0;
	o = 0;	
	
	b = (char *)malloc(1 * sizeof(char));
	b[0] = '\0';
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	char	*b;
	size_t	i;
	size_t	o;

	i = 0;
	o = 0;
	b = NULL;
	if (start > len)
	{
		b = (void *)malloc(sizeof(char));
		b[0] = '\0';
		return (b);
	}
	if (*s == 0)
	{
		a = (char *)s;
		return (nullcase());
	}
	a = (char *)s;

	while (a[o] && o < len)
		o++;
	b = (char *)malloc(o * sizeof(char));
	if(!b)
		return (0);
	while (a[start] && i < len)
	{
		b[i] = a[start];
		i++;
		start++;
	}
	b[i] = '\0';
	return (b);
}
//int main(void)
//{
//	//s = ft_substr("tripouille", 100, 1);
//	printf("%s", ft_substr("", 1, 100));
//	//printf("%d", strcmp(s, ""));
//	free(ft_substr("", 1, 100));
//}