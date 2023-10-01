#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *icurrent;
	t_list *inext;

	if (*lst)
	{
		icurrent = *lst;
		while(icurrent)
		{
			inext = icurrent->next;
			ft_lstdelone(icurrent, del);
			icurrent = inext;
		}
	}
	*lst = 0;
}
