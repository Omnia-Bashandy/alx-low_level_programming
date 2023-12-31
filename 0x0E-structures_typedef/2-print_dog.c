#include "dog.h"
#include <stdio.h>
#include <math.h>

/**
 * print_dog - prints a struct dog
 * @d: dog to print
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

    if (isnan(d->age) || isinf(d->age) || d->age < 0)
        printf("Age: (nil)\n");
    else
        printf("Age: %f\n", d->age);

    printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
