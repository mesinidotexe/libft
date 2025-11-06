#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *newlist;

    if(!lst)
        return ;
    while(lst)
    {
        newlist = malloc (sizeof(lst));
        if(!newlist)
            del(newlist);
        newlist = lst;
        //newlist = newlist->next;
        newlist->next = lst->next;
        lst = f(lst);
        lst = lst->next;
    }
    free (lst);
    return (newlist);
}
