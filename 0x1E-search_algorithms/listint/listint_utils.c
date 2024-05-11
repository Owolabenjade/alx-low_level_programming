#include <stdlib.h>
#include "search_algos.h"

/**
 * create_list - Creates a singly linked list from an array of integers
 * @array: Array of integers to convert to a linked list
 * @size: Size of the array
 * Return: Pointer to the head of the newly created list
 */
listint_t *create_list(int *array, size_t size)
{
    listint_t *head = NULL;
    listint_t *new_node;
    listint_t *current;
    size_t i;

    for (i = 0; i < size; i++) {
        new_node = malloc(sizeof(listint_t));
        if (!new_node)
            return NULL;
        new_node->n = array[i];
        new_node->index = i;
        new_node->next = NULL;

        if (!head) {
            head = new_node;
        } else {
            current->next = new_node;
        }
        current = new_node;
    }
    return head;
}

/**
 * print_list - Prints all the elements of a listint_t list
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
    while (list)
    {
        printf("Index[%lu] = [%d]\n", list->index, list->n);
        list = list->next;
    }
}

/**
 * free_list - Frees a listint_t list
 * @list: Pointer to the head of the list
 */
void free_list(listint_t *list)
{
    listint_t *tmp;

    while (list)
    {
        tmp = list;
        list = list->next;
        free(tmp);
    }
}

