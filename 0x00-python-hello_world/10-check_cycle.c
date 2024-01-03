#include "lists.h"

/**
 * check_cycle - will check if a linked list contains a cycle
 * @list: to check linked lists
 *
 * Return: 1 if the list has a cycle, 0 if not
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
/**
 * sisinio python code for the linked lists
 */
