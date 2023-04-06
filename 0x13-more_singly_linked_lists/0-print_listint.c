#include "lists.h"

size_t print_listint(const listint_t *h)
{
    // Initialize a counter variable "k" to keep track of the number of elements
    unsigned int k = 0;

    // Create a new pointer "new_node" that points to the head of the list ("h")
    const listint_t *new_node = h;

    // Loop through the linked list until the end is reached (i.e. current node is NULL)
    while (new_node != NULL)
    {
        // Print the value of the current node's "n" member using the "printf" function
        printf("%d\n", new_node->n);

        // Increment the counter variable "k"
        k++;

        // Move the "new_node" pointer to the next node in the list
        new_node = new_node->next;
    }

    // Return the total number of elements in the list
    return k;
}
