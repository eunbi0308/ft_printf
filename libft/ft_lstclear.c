#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = *lst;
	if (lst || *lst)
	{
		while (*lst)
		{
			*lst = tmp->next;
			del(tmp->content);
			free(tmp);
			tmp = *lst;
		}
	}
}
