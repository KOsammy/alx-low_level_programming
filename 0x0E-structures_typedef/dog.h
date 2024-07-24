#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The dog's info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog -prints a struct dog
 * @d: pointer to struct dog for print
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog
 * @name: initalises name
 * @age: initialises age
 * @owner: initialises owner
 * Return: pointer to new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner);


#endif /* DOG_H */

