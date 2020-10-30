#include <stdio.h>

int main(int argc, char *argv[]){

    int i;
    if (argc == 1){
        printf("ONE arguement \n");
    }else if(argc > 1){
        printf("Here's your arguements:\n");
        printf("Argc: %d\n",argc);
        for(i=0; i < argc; i++) {
            printf("\n %d ==> %s ",i,argv[i]);
        }
    }
    printf("\n");
    return 0;
}

// int main(int argc, char *argv[])
// {
//     int i;

//     printf("argc:     %d\n", argc);
//     printf("argv[0]:  %s\n", argv[0]);

//     if (argc == 1)
//     {
//         printf("No arguments were passed.\n");
//     }
//     else
//     {
//         printf("Arguments:\n");

//         for (i = 1; i < argc; ++i)
//         {
//             printf("  %d. %s\n", i, argv[i]);
//         }
//     }

//     return 0;
// }