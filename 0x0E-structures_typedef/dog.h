#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: first element
 * @age: second element
 * @owner: third element
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - type
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char * name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *neew_dog(char *name, float age, char *owner);
void free_dog(dog_t*d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
