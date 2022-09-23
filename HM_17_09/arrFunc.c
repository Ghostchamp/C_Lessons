

int minFunc(int* a, int size,int* count){
    int min = 10000000;
    for(int i = 0; i < size; i++)
        if (a[i] < min)
        {
            min = a[i];
            *count = i;
        }
    return min;
}

int maxFunc(int* a, int size, int* count){
    int max = a[0];
    for (int i = 0; i < size; i++)
        if(a[i] > max)
        {
            max = a[i];
            *count = i;
        }
    return max;
}

void randArr(int* a, int size){
    for(int i = 0; i < size; i++)
        a[i] = rand()%100 + 1;
}

void printArr(int* a, int size){
    for(int i = 0; i < size; i++)
        printf("Index [%d] of matrix === %d\n", i, a[i]);
    printf("\n");
}

void findArr(int *a,int size,int scope){
    for (int i = 0; i < size; i++)
        if (a[i] == scope)
        {
            printf("Your found index of number(%d) is [%d]\n",scope,i);
            return;
        }
        printf("Number Not Found\n");
}