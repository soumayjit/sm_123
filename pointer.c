#include<stdio.h>

int main(void){
    int a; 
    int* ptr;
    a = 5;
    ptr = &a;
    printf("\nthe address of a  = %p\n",ptr);
    printf("the value of a = %d\n",*ptr);
    return 0;
}