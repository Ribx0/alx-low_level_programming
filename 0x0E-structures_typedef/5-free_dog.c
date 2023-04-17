#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @p: struct dog to free
 */
void free_dog(dog_t *p)
{
	if (p)
	{
		free(p->name);
		free(p->owner);
		free(p);
	}
}
