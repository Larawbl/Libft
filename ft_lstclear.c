#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void
*))
{
	t_list	*ptr;

	ptr = *lst;
	while (ptr)
	{
		(*del)(ptr->content);
		free(ptr);
		ptr = ptr->next;
	}
	*lst = NULL;
}