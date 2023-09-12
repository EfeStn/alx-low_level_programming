#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: Pointer to the struct dog variable.
 *
 * This function prints the name, age, and owner of the dog. If any element
 * of the dog struct is NULL, it prints (nil) instead of the NULL value.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
