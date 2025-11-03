#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ultimo;

    if(!lst)
        return;
    if (!*lst)
        *lst = new;
    else
    {
        ultimo = *lst;
        while(ultimo->next)
            ultimo = ultimo->next;
        ultimo->next = new;
    }
}