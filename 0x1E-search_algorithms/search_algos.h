#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <math.h>  // for sqrt()

int jump_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
#endif /* SEARCH_ALGOS_H */

