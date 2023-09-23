#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>


typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);




#endif /* SORT_H */
