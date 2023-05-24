#include "monty.h"

/**
 * f_pall - prints the stack elements
 * @head: pointer to the head of the stack
 * @counter: unused parameter
 *
 * Return: No return value
 */
void f_pall(stack_t **head, unsigned int counter)
{
 stack_t *h;

 (void)counter;

 h = *head;
 if (!h)
  return;

 while (h)
 {
  printf("%d\n", h->n);
  h = h->next;
 }
}
