#ifndef DOG_H
#define DOG_H
struct dog
{
	char *name[13];
	float age;
	char *owner[15];
}
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
