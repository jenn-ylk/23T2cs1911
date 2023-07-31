// A program which prints pet details from a struct

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 64

// pet enum
enum pet_type {
    DOG,
    CAT,
    BIRD,
    FISH,
    LIZARD
};

// type is struct pet
struct pet {
    // type name
    char name[MAX_NAME_LEN];
    enum pet_type type;
    int age;
};

void get_pet_type(enum pet_type type, char *type_str) {
    if (type == DOG) {
        strcpy(type_str, "dog");
    } else if (type == CAT) {
        strcpy(type_str, "cat");
    } else if (type == BIRD) {
        strcpy(type_str, "bird");
    } else if (type == FISH) {
        strcpy(type_str, "fish");
    } else if (type == LIZARD) {
        strcpy(type_str, "lizard");
    }

}

// prints the details of a pet
void print_pet(struct pet pet) {
    char type[MAX_NAME_LEN];
    get_pet_type(pet.type, type);
    printf("%s is a %s aged %d\n", pet.name, type, pet.age);
    
}

int main(void) {
    // initialise a dog
    struct pet my_pet = {"Jackie", DOG, 10};
    print_pet(my_pet);

    return 0;
}