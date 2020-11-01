#include <stdio.h>

int main(int argc, char *argv[]){
    int arr[10] = {3,6,9,12,15,18,21,32,43,65};

    int *p = &arr[0];
    for(int i=0; i<10;i++){
        printf("%p  ==> %d \n",p+i,*(p+i));
    }
    return 0;

    
}
