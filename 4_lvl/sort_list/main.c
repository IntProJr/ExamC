#include <stdio.h>
#include "ft_list.h"

t_list	*sort_list(t_list* lst, int(*cmp)(int, int))
{
	int		overflow;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data), lst->next->data) == 0)
		{
			overflow = lst->data;
			lst->data = lst->next->data;
			lst->next->data = overflow;
			lst = tmp;
		}
		else
			lst = lst -> next;
	}
	lst = tmp;
	return (lst);
}

int main()
{
	int i;

	i = 0;

	printf("Hello, World!\n");
	return 0;
}
