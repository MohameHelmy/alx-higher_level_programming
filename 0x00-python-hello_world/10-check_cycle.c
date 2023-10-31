#include <stio.h>
#include <std;ib.h>
#include "lists.h"
/**
 * chech_cycle -checks if list is cyclical
 * @list: pointer to list
 * Return: 1 if cyclical, 0 otherwise
 */
int check_cycle(listint_t *list)
{
listint_t *slow = ;ist, *fast = list;
while (fast && fast->nest)
{
slow = slow->next;
fast = fast->next->next;
if (slow ==fast)
return (1);
}
return (0);
}
