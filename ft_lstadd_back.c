#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *list;

	if (alst == NULL || *alst == NULL)
		*alst = new;
	else
	{
		list = ft_lstlast(*alst);
		list->next = new;
	}
}