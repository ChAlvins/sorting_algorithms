#include "sort.h"

/**
 * list_len - Function
 * @list: Head
 *
 * Description: Returns length of list.
 * Return: len, list length.
 * On error, stderr.
 */
size_t list_len(listint_t *list)
{
	size_t len = 0;

	while (list)
	{
		len++;
		list = list->next;
	}

	return (len);
}

/**
 * swap_nodes - Function
 * @list: Head
 * @p: Node
 *
 * Description: Swaps nodes at pointer p with the following node
 * Return: void.
 * On error, stderr.
 */
void swap_nodes(listint_t **list, listint_t **p)
{
	listint_t *one, *two, *three, *four;

	one = (*p)->prev;
	two = *p;
	three = (*p)->next;
	four = (*p)->next->next;
	two->next = four;
	if (four)
		four->prev = two;
	three->next = two;
	three->prev = two->prev;
	if (one)
		one->next = three;
	else
		*list = three;
	two->prev = three;
	*p = three;
}

/**
 * cocktail_sort_list - Sort algorithm
 * @list: Doubly linked list
 *
 * Description: Implements the cocktail sort algorithm
 * on a doubly linked list
 * Return: void.
 * On error, stderr.
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *p;
	int sorted = 0;

	if (!list || !*list || list_len(*list) < 2)
		return;
	p = *list;
	while (!sorted)
	{
		sorted = 1;
		while (p->next)
		{
			if (p->n > p->next->n)
			{
				sorted = 0;
				swap_nodes(list, &p);
				print_list(*list);
			}
			else
				p = p->next;
		}
		if (sorted)
			break;
		p = p->prev;
		while (p->prev)
		{
			if (p->n < p->prev->n)
			{
				sorted = 0;
				p = p->prev;
				swap_nodes(list, &p);
				print_list(*list);
			}
			else
				p = p->prev;
		}
	}
}
