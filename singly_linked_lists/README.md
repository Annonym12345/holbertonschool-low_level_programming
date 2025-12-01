# Git Intro Project

 File: 0-print_list.c
───────┼──────────────────────────────────────────────────────────────────────────────────────────────
   1   │ #include "lists.h"
   2   │ #include <stdio.h>
   3   │
   4   │ /**
   5   │  * print_list - Prints all the elements of a list_t list.
   6   │  * @h: The list_t list.
   7   │  *
   8   │  * Return: The number of nodes in h.
   9   │  */
  10   │
  11   │ size_t print_list(const list_t *h)
  12   │ {
  13   │     size_t n = 0;
  14   │
  15   │     while (h)
  16   │     {
  17   │         if (h->str == NULL)
  18   │             printf("[0] (nil)\n");
  19   │
  20   │         else
  21   │             printf("[%d] %s\n", h->len, h->str);
  22   │
  23   │         n++;
  24   │         h = h->next;
  25   │     }
  26   │
  27   │     return (n);
  28   │ }



 File: 1-list_len.c
───────┼──────────────────────────────────────────────────────────────────────────────────────────────
   1   │ #include "lists.h"
   2   │
   3   │ /**
   4   │  * list_len - Finds the number of elements in
   5   │  *            a linked list_t list.
   6   │  * @h: The linked list_t list.
   7   │  *
   8   │  * Return: The number of elements in h.
   9   │  */
  10   │ size_t list_len(const list_t *h)
  11   │ {
  12   │     size_t el = 0;
  13   │
  14   │     while (h)
  15   │     {
  16   │         el++;
  17   │         h = h->next;
  18   │     }
  19   │
  20   │     return (el);
  21   │ }
───────┴───────────────────────────────────────────────






 File: 2-add_node.c
───────┼──────────────────────────────────────────────────────────────────────────────────────────────
   1   │ #include "lists.h"
   2   │ #include <string.h>
   3   │
   4   │ /**
   5   │  * add_node - Adds a new node at the beginning
   6   │  *            of a list_t list.
   7   │  * @head: A pointer to the head of the list_t list.
   8   │  * @str: The string to be added to the list_t list.
   9   │  *
  10   │  * Return: If the function fails - NULL.
  11   │  *         Otherwise - the address of the new element.
  12   │  */
  13   │ list_t *add_node(list_t **head, const char *str)
  14   │ {
  15   │     char *dup;
  16   │     int len;
  17   │     list_t *n;
  18   │
  19   │     n = malloc(sizeof(list_t));
  20   │     if (n == NULL)
  21   │         return (NULL);
  22   │
  23   │     dup = strdup(str);
  24   │     if (dup == NULL)
  25   │     {
  26   │         free(n);
  27   │         return (NULL);
  28   │     }
  29   │
  30   │     for (len = 0; str[len];)
  31   │         len++;
  32   │
  33   │     n->str = dup;
  34   │     n->len = len;
  35   │     n->next = *head;
  36   │
  37   │     *head = n;
  38   │
  39   │     return (n);
  40   │ }
───────┴──────────────────────────────────────────────────────



333333333333
        #include "lists.h"
   2   │ #include <string.h>
   3   │
   4   │ /**
   5   │  * add_node_end - Adds a new node at the end
   6   │  *                of a list_t list.
   7   │  * @head: A pointer the head of the list_t list.
   8   │  * @str: The string to be added to the list_t list.
   9   │  *
  10   │  * Return: If the function fails - NULL.
  11   │  *         Otherwise - the address of the new element.
  12   │  */
  13   │ list_t *add_node_end(list_t **head, const char *str)
  14   │ {
  15   │     char *dup;
  16   │     int len;
  17   │     list_t *new, *last;
  18   │
  19   │     new = malloc(sizeof(list_t));
  20   │     if (new == NULL)
  21   │         return (NULL);
  22   │
  23   │     dup = strdup(str);
  24   │     if (str == NULL)
  25   │     {
  26   │         free(new);
  27   │         return (NULL);
  28   │     }
  29   │
  30   │     for (len = 0; str[len];)
  31   │         len++;
  32   │
  33   │     new->str = dup;
  34   │     new->len = len;
  35   │     new->next = NULL;
  36   │
  37   │     if (*head == NULL)
  38   │         *head = new;
  39   │
  40   │     else
  41   │     {
  42   │         last = *head;
  43   │         while (last->next != NULL)
  44   │             last = last->next;
  45   │         last->next = new;
  46   │     }
  47   │
  48   │     return (*head);
  49   │ }



 File: 4-free_list.c
───────┼──────────────────────────────────────────────────────────────────────────────────────────────
   1   │ #include "lists.h"
   2   │ #include <stdlib.h>
   3   │
   4   │ /**
   5   │  * free_list - Frees a list_t list.
   6   │  * @head: A pointer to the list_t list.
   7   │  */
   8   │ void free_list(list_t *head)
   9   │ {
  10   │     list_t *temp;
  11   │
  12   │     while (head)
  13   │     {
  14   │         temp = head->next;
  15   │         free(head->str);
  16   │         free(head);
  17   │         head = temp;
  18   │     }
  19   │ }
