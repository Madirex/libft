#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (lst);
	lst->next = 0;
	lst->content = content;
	return (lst);
}
