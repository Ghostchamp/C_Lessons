#include <stdio.h>
#include <stdlib.h>

int lenstring(const char* str){
    int i = 0;
    do
    {
        i++;
    }while(str[i] != 0);
    return i;
}

void copystring(char* strCop,const char* strOr){
    *strCop = *(char*)malloc(sizeof(char)*lenstring(strOr));
    int i;
    for (i = 0; i < lenstring(strOr); i++)
    {
        strCop[i] = strOr[i];
        strCop[i+1] = 0;
    }
}

int comparstring(const char* str1, const char* str2){
    int i = 0;
    while (str1[i] == str2[i])
    {
        i++;
    }
    if (lenstring(str1) == lenstring(str2))
    {
        if (str1[i] > str2[i])
        {
            return str1[i];
        }
        else
        {
            return -str2[i];
        }
    }
    else if(lenstring(str1) > lenstring(str2))
    {
        return(str1[i]);
    }
    else
    {
        return(-1*str2[i]);
    }
}