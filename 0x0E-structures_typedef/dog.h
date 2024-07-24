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

#endif /* DOG_H */

