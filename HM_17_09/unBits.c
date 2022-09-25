#include <stdio.h>
#include <stdlib.h>

int countBits(unsigned char data){
    int result = 0;
    for(;data;data>>=1)
        if(data & 1)
            result++;
    return result;
}



int main(){
    unsigned int n;
    printf("print number\n");
    scanf("%u11",&n);
    printf("%d",countBits(n));
}