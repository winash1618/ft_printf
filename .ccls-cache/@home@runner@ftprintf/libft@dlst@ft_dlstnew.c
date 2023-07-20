/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 08:44:47 by mkaruvan          #+#    #+#             */
/*   Updated: 2023/06/26 16:32:38 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstnew()
{
	t_dlist	*new;

	new = (t_dlist *)malloc(sizeof(t_dlist));
	if (!new)
		return (NULL);
	new->content = NULL;
  new->ch = '\0';
	new->next = NULL;
	return (new);
}
