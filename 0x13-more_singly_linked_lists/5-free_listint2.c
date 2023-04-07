#include "lists.h"

/**
* free_listint2 - Frees a listint_t list.
* @head: A pointer to the address of the
*        head of the listint_t list.
*
* Description: Frees all nodes of a listint_t list and sets
*              the head to NULL.
* Return: Nothing.
*/
void free_listint2(listint_t **head)
{
listint_t *current;

if (head == NULL || *head == NULL)
return;

while ((current = *head) != NULL)
{
*head = (*head)->next;
free(current);
}

*head = NULL;
}
