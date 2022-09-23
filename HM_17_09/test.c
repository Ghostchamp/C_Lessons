#include <stdio.h>
#include <stdlib.h>

#include "arrFunc.c"

int main(){
    int cmd = 0;
    int size = 0;
    int cheker = 0;
    int count;
    int scope;
    printf("What size array do you want?\n\n");
    scanf("%d", &size);
    int* arr = (int*)malloc(size*sizeof(int));
    do{
        printf("    Welcome\n       to\n        the\nFeature Test Program\n");
        printf("0. EXIT.\n");
        printf("1. Randomize the arry.\n");
        printf("2. Output an array.\n");
        printf("3. Find MAX and MIN of Array\n");
        printf("4. Find Index of Array for your Number.\n");
        scanf("%d", &cmd);
        switch(cmd)
        {
        case 1:
            randArr(arr,size);
            printf("Random Fill Successful\n\n");
            break;
        case 2:
            printf("Your Array:\n");
            printf("================\n\n");
            printArr(arr,size);
            break;
        case 3:
            printf("MAX of Array: %d is Index [%d]MIN of Array: %d is Index [%d]\\n",maxFunc(arr,size,&count),count,minFunc(arr,size,&count),count);
            break;
        case 4:
            printf("Enter the number that you are looking for in the array.\n");
            scanf("%d",&scope);
            findArr(arr,size,scope);
            break;
        default:
            break;
        }
    }while(cmd);
    free(arr);
    return 0;
}
