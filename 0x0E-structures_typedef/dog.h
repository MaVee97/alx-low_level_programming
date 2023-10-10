#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
