/**
 * struct dog - structure for dog's information
 * @name: the name of the dog
 * @age: the age of the
 * @owner: the owner of the dog's name
 */

typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;

void init_dog(struct dog *, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *t);
