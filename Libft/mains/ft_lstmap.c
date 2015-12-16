/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 20:33:19 by fde-monc          #+#    #+#             */
/*   Updated: 2015/12/08 20:58:36 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*res;

	tmp = lst;
	while (tmp != NULL)
	{
		tmp2 = tmp;
		res = f(tmp2);
		tmp = tmp->next;
	}
}
