/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:10:48 by del-alj           #+#    #+#             */
/*   Updated: 2019/04/15 19:22:23 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *next;

	while (*alst != NULL)
	{
		next = (*alst)->next;
		(*del)((*alst)->content, (*alst)->content_size);
		free((void*)*alst);
		*alst = 0;
		*alst = next;
	}
}
