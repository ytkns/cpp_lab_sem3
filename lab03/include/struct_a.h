#include<stdio.h>

struct StructA{
    int valueA;
    struct StructC *ptr_to_C;
    struct StructA *ptr_to_A;
};

typedef struct StructA StructA;

void print_structA(StructA* s);
