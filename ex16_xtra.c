#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


struct Person {
    char *name;
    int height;
    int age;
    int weight;
};

struct Person create_person(char *name,int age,int height,int weight){
    struct Person who;
    who.name = strdup(name);
    who.age = age;
    who.height = height;
    who.weight = weight;

    return who;
}

void print_person(struct Person who){
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}
void destroy_person(struct Person who){
    free(who.name);
}

int main(int argc, char *argv[]){
    struct Person joe = create_person("joe Alex",22,67,190);
    struct Person frank = create_person("Frank Blank",32,73,210);

    print_person(joe);
    print_person(frank);

    destroy_person(joe);
    destroy_person(frank);

    return 0;
}