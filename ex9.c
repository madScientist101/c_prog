#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;
    char *states[] = {"California","Oregon","Washington","Texas"};
    int arr_s = sizeof states / sizeof states[0];
    for(int v=0; v < argc; v++){
        printf("arg %d: %s\n",v,argv[v]);
    }
    // printf("%d\n",arr_s);
    // printf("%ld\n",sizeof states[0]);
    // printf("%ld\n",sizeof states / sizeof states[0]);
    
    while (i < arr_s)
    {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    const char *name = "mike";
    for(int i=0; i<sizeof(int);i++){
        printf("Name: %c\n",name[i]);
        printf(" %lu\n",sizeof(char));
        printf(" %lu\n",sizeof(char*));
        printf(" %lu\n",sizeof(int));
        printf(" %lu\n",sizeof(double));
        printf(" %lu\n",sizeof(float));
    }
    
    return 0;
}