#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 64

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
    } else {
        strcpy(type_str, "other");
    }
}

void print_pet(struct pet pet) {
    char type_str[MAX_NAME_LEN] = "";
    get_pet_type(pet.type, type_str);
    printf("%s is a %s aged %d\n", pet.name, type_str, pet.age);

}

int main(void) {

    struct pet my_pet;
    my_pet.type = DOG;
    my_pet.age = 7;
    strcpy(my_pet.name, "Boris");

    print_pet(my_pet);
    return 0;
}