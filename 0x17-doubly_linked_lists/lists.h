#ifndef MAIN_H
#define MAIN_H
/*include library*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
/*Write a function that prints all the elements of a dlistint_t list.*/
size_t print_dlistint(const dlistint_t *h);
/*Write a function that returns the number of elements in a linked dlistint_t list.*/
size_t dlistint_len(const dlistint_t *h);
/*Write a function that adds a new node at the beginning of a dlistint_t list.*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/*Write a function that adds a new node at the end of a dlistint_t list.*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/*Write a function that frees a dlistint_t list.*/
void free_dlistint(dlistint_t *head);
/*Write a function that returns the nth node of a dlistint_t linked list.*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/*Write a function that returns the sum of all the data (n) of a dlistint_t linked list.*/
int sum_dlistint(dlistint_t *head);
/*Write a function that inserts a new node at a given position.*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/*Write a function that deletes the node at index index of a dlistint_t linked list.*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* MAIN_H */
