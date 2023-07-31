#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define ROLE_SIZE 20

typedef struct student Student;

struct student{
    int zid;
    char name[MAX_LEN];
};

Student *find_student(Student students[], int n_students, int zid) {
    Student *found = NULL;

    return found;
}

int main (void) {


    Student role[2] = {};
    role[0].zid = 5258927;
    strcpy(role[0].name, "Jenny");
    role[1].zid = 5240723;
    strcpy(role[1].name, "Boris");

    int id;
    printf("Find which student: ");
    scanf("%d", &id);

    Student *found = find_student(role, 2, id);
    if (found == NULL) {
        printf("Student not found\n");
    } else {
        printf("Student name is %s\n", found->name);
    }


    return 0;
}