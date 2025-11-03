#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *nextnode;
    nextnode = malloc(sizeof(struct s_list));
    if(!nextnode)
        return (NULL);
    nextnode -> content = content;
    nextnode -> next = NULL;
    return (nextnode);
}