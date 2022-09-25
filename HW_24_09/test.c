#include <stdio.h>
#include <stdlib.h>

#include "strhelp.c"


int main(){
    char str1[] = "923451\0";
    char str2[] = "9234519\0";
    printf("String: %s\n", str1);
    printf("String Number 1 == %d\n",lenstring(str1));
    printf("String: %s\n", str2);
    printf("String Number 2 == %d\n",lenstring(str2));
    comparstring(str1,str2);
    printf("Result of my compare: %d\n",comparstring(str1,str2));
    copystring(str1,str2);
    printf("Copy Complate!!!\n");
    printf("String: %s\n", str1);
    printf("String Number 1 == %d\n",lenstring(str1));
    printf("String: %s\n", str2);
    printf("String Number 2 == %d\n",lenstring(str2));
    return 0;
}