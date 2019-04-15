/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 17:46:07 by del-alj           #+#    #+#             */
/*   Updated: 2019/04/11 01:32:43 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*cst_s1;
	unsigned char	*cst_s2;

	cst_s1 = (unsigned char*)s1;
	cst_s2 = (unsigned char*)s2;
	i = -1;
	while (cst_s1[++i])
		if (cst_s1[i] - cst_s2[i] != 0)
			return (cst_s1[i] - cst_s2[i]);
	return (cst_s1[i] - cst_s2[i]);
}
