#include "list.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_node_begin - add node to beginning of double circular linked list
 *
 * @list: list to add to
 * @str: string to store a copy of
 *
 * Return: address of new list
 */
List *add_node_begin(List **list, char *str)
{
	List *new;

	if (list == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(List));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*list != NULL)
	{
		new->next = *list;
		new->prev = (*list)->prev;
		(*list)->prev = new;
		new->prev->next = new;
	}
	if (*list == NULL)
	{
		new->prev = new;
		new->next = new;
	}
	*list = new;
	return (new);
}


/**
 * add_node_end - add node to end of double circular linked list
 *
 * @list: list to add to
 * @str: string to store a copy of
 *
 * Return: address of new list
 */
List *add_node_end(List **list, char *str)
{
	List *new;

	if (list == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(List));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*list != NULL)
	{
		new->next = *list;
		new->prev = (*list)->prev;
		(*list)->prev = new;
		new->prev->next = new;
	}
	if (*list == NULL)
	{
		new->prev = new;
		new->next = new;
		*list = new;
	}
	return (new);
}