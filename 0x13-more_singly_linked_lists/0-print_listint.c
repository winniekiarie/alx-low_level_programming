#include "lists.h"

/**
* print_listint - Prints all the elements of a listint_t list.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
unsigned int count = 0;
const listint_t *current = h;

while (current != NULL)
{
printf("%d\n", current->n);
count++;
current = current->next;
}

return (count);
}
