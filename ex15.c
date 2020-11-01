#include <stdio.h>

int main(int argc, char *argv[]){
    int arr[10] = {3,6,9,12,15,18,21,32,43,65};

    int *p = &arr[0];
    for(int i=0; i<10;i++){
        printf("%p  ==> %d \n",p+i,*(p+i));
    }
    
    
    int ages[] = {23,43,12,32,21};
    char *names[] = {"Alan","Frank","Mary","john","Lisa"};

    int count = sizeof(ages) / sizeof(int);
    int i = 0;
    for(i=0;i<count;i++){
        printf("%s has %d year alive.\n",names[i],ages[i]);
    }
    printf("----\n");

    // int *cur_age = &ages[0];
    // char **cur_name = &names[0];
    int *cur_age = ages;
    char **cur_name = names;

    for(i=0;i<count;i++){
        printf("%s is %d years old\n",*(cur_name+i),*(cur_age+i));
    }

    printf("----\n");

    for(i=0; i<count;i++){
        printf("%s is %d years old again\n",cur_name[i],cur_age[i]);
    }

    printf("-------\n");

    for(cur_name=names, cur_age=ages;(cur_age-ages)<count;cur_name++,cur_age++){
        printf("%s lived %d years so far.\n",*cur_name,*cur_age);
    }

    // printf("------\n");
    // printf("Value = %s\n",*(cur_name=names));
    // printf("memory address = %p\n", cur_name = names);
    // printf("value = %d\n", *(cur_age = ages));
    // printf("memory address = %p\n", cur_age = ages);
    // printf("%ld\n", (cur_age-ages));
    // printf("%p\n",ages);

    // printf("Size of ages ==> %ld\n",sizeof(ages));
    // printf("Size of an INT ==> %ld\n",sizeof(int));
    // printf("Get ages array lenght ==> %ld\n",(sizeof(ages)/sizeof(int)));

    return 0;
}
