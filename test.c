#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 20

enum States
{
    Working = 1,
    Failed = 0
};

const char *byte_to_binary(int x)
{
    static char b[9];
    b[0] = '\0';

    int z;
    for (z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }

    return b;
}

int main(int argc, char *argv[])
{
    // char test[MAX] = "mike";
    // printf("Size: %ld\n",sizeof(test));

    // for(int i=0;i<MAX;i++){
    //     char t = test[i];
    //     printf("%c\n",test[i]);
    // }
    // enum States tee;

    // printf("%d \n", tee = Failed);
    // return 0;

    // const int local = 10;
    // int *ptr = (int *)&local;

    // printf("Initial value of local : %d \n", local);
    // printf("Initial value of PTR : %d \n", *ptr);

    // *ptr = 100;

    // printf("Modified value of local: %d \n", local);

    // return 0;

    int arr[] = {34,54,675,131,3241,23,5431,2454,2341,3};
    for(int i = 0; i < sizeof(arr)/sizeof(int);i++){
        printf("i = %d \tValue = %d \n",i,arr[i]);
    }
    printf("######################### \n");

    for(int i = 0; i < sizeof(arr)/sizeof(int);++i){
        printf("Unshifted I(binary) = %s ==> %d \n", byte_to_binary(i),i);
    }

    printf("######################### \n");

    for(int i = 0; i < sizeof(arr)/sizeof(int);++i){
        printf("left shifted I = %s ==> %d \n", byte_to_binary(i<<1),i<<1);
    }

    printf("######################### \n");

    for(int i = 0; i < sizeof(arr)/sizeof(int);++i){
        printf("Right shift I = %s ==> %d\n",byte_to_binary(i>>1),i >> 1);
    }
}