#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int main(int argc, char *argv[])
{
    char test[MAX] = "mike";
    printf("Size: %ld\n",sizeof(test));

    for(int i=0;i<MAX;i++){
        char t = test[i];
        printf("%c\n",test[i]);
    }
}