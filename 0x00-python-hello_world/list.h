#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * struct listint_s - sindle linked list
 * @n: integer 
 * @next: points to next node
 *
 * Description: single linked kist node struvture
 * for Holberton project
 */
{
  int n;
  struct listint_s *next;
} listint_t;

size_t print_listint(const lisint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
