#include "monty.h"

/**
 * f_sub - Subtracts the second element from the top element of the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Return: No return value
 */
void f_sub(stack_t **head, unsigned int counter)
{
 if (*head == NULL || (*head)->next == NULL)
 {
  fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
  fclose(bus.file);
  free(bus.content);
  free_stack(*head);
  exit(EXIT_FAILURE);
 }

 stack_t *top1 = *head;
 stack_t *top2 = top1->next;
 int result = top2->n - top1->n;

 top2->n = result;
 *head = top2;
 free(top1);
}
