#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Data type of a dog.
 * @name: Name of Dog.
 * @age: Age of Dog.
 * @owner: Owner of Dog.
 */
struct dog
{
	char *name;
	float age;
	char  *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
typedef struct dog dog_t;
void free_dog(dog_t *d);
char *strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
