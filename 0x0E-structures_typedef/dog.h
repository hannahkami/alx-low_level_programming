#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's personal information
 * @name: cha
 * @age: float
 * @owner: char
 */
struct dog
{
	char *name[13];
	float age;
	char *owner[15];
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
