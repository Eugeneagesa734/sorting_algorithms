#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/*Bitonic sort macro that are bitonic sort*/
# define UP 0
# define DOWN 1

/**
 * enum bool - Boolean values enumeration
 * @true: Return 1
 * @false: Return 0
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - Nodes for Doubly linked lists
 *
 * @n: Sorted integer in the node
 * @prev: Previous element of the list pointer
 * @next: Next element pointer of the list.
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Function to act as a print helper.*/
void print_array(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
