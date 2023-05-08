#include<stdio.h>
#define concantenateNumbers(A,B) B##A 
void main() { 
    int i;
i = concantenateNumbers(12,36); 
printf("%d\n", i);
}