#include "lists.h"
/**
 * check_cycle - A function that checks if a linked list contains a cycle
 * @list: number of linked list list to check
 *
 * Return: 1 (Success), 0 (Fail)
 */
int check_cycle(listint_t *list)
{
listint_t *slow = list;
listint_t *fast = list;
if (!list)
return (0);
while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
return (1);
}
return (0);
}
