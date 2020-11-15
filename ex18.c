// Function pointer

// format:
// int (*POINTER_NAME) (int a, int b)
// eg,
// int (*tester) (int a, int b) = sorted;
// printf("%d  is the same as %d",tester(43,5),sorted(4,7))


#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


void die(const char *message)
{
    if(errno){
        perror(message);
    }else{
        printf("ERROR: %s\n",message);
    }
    exit(1);
}

// creates a fake type
typedef int (*compare_cd) (int a, int b);


int *bubble_sort(int *numbers, int count, compare_cd cmp)
{
    int temp = 0;
    int i = 0;
    int j = 0;
    int *target = malloc(count * sizeof(int));
    

    // printf("count = %d \n",count);
    // printf("size of int = %ld \n",sizeof(int));
    // printf("res = %ld \n",count * sizeof(int));
    
    if(!target)
        die("Memory error.");

    memcpy(target,numbers,count * sizeof(int));

    // printf("target = %d \n",target[1]);
    for(i = 0;i < count; i++){
        for(j = 0; j < count-1; j++){
            if(cmp(target[j],target[j+1]) > 0){
                temp = target[j+1];
                target[j+1] = target[j];
                target[j] = temp;
            }
        }
    }

    // printf("target = %d \n", target[0]);
    return target;
}

int sorted_order(int a, int b)
{
    return a - b;
}

int reverse_order(int a, int b)
{
    return b - a;
}

int strange_order(int a, int b)
{
    if(a == 0 || b == 0){
        return 0;
    }else{
        return a % b;
    }
}


void test_sorting(int *numbers, int count, compare_cd cmp)
{
    int i = 0;
    int *sorted = bubble_sort(numbers, count, cmp);

    if (!sorted)
        die("Failed to sort as requested.");

    for(i = 0; i < count; i++){
        printf("%d ", sorted[i]);
    }

    printf("\n");
    free(sorted);

    unsigned char *data = (unsigned char *) cmp;
    for(i = 0; i < 25; i++){
        printf("%02x:",data[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    if (argc < 2) die("USAGE: ex18 4 3 1 5 6");

    int count =  argc - 1;
    int i = 0;
    char **inputs = argv + 1;
    int *numbers = malloc(count * sizeof(int));


    if(!numbers) die("Memory error.");

    for(i = 0; i < count; i++){
        numbers[i] = atoi(inputs[i]);
    }

    test_sorting(numbers, count, sorted_order);
    test_sorting(numbers, count, reverse_order);
    test_sorting(numbers, count, strange_order);

    free(numbers);

    return 0;
}