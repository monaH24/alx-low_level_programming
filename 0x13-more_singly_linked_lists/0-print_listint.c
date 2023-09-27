#include "lists.h"

size_t print_listint(const listint_t *h)
{
	list_ i = 0;
	
	while (h)
	{
		printf(%d\n,h->n);
		h = h->next;
		++i;
	}
	return(i);
}

