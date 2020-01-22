/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosalee <lrosalee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:27:53 by lrosalee          #+#    #+#             */
/*   Updated: 2020/01/22 18:30:07 by lrosalee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif
