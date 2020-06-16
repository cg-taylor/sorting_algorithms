#include "sort.h"

/**
 * insertion_sort_list - sort a list using the insertion sort algorithm
 * @list: the doubly linked list of integers to sort
 *
 * Description: sort a doubly linked list of integers in ascending order
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	/* verify list and *list */
	if (!list || !*list)
		return;
	/* keep track of head */
	/* start at second node */
	listint_t *h;
	listint_t *current;
	listint_t *position;
	listint_t *temp = NULL;

	h = *list;
	current = h->next;
	position = current->next;

	while (position)
	{
		current = position;
		position = current->next;
		while (current->n < current->prev->n)
		{
			/* if swap is with head node, reset head */
			if (current->prev == h)
				h = current;
			temp = current->prev;
			current->prev = current->prev->prev;
			current->prev->next = current->next;
			temp->prev = current;
			current->next = temp;
			current->prev->next = current;
			temp->next->prev = temp;
		}
		print_list(*list);
	}


	/* second pointer to keep track of where I left off */
	/* print list each time */

	/* when pos == NULL, done */
}


/**
keep track of head
start at second node
variables -- head, current, position
is current == NULL
if current < current->prev, swap
compare to next on left, swap until current > current->prev or current->prev == NULL
if swap is with head node, set head to the swapped node
print list if there's a swap
move current to position
move position forward, is position == NULL
when position == NULL, done
**/
