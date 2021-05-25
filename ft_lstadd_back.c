#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *list;

	list = *alst;
	list = ft_lstlast(list);
	list->next = new;
}