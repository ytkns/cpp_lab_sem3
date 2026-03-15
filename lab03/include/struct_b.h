#include<stdio.h>

struct StructB{
    int valueB;
    struct StructD *ptr_to_D;
    struct StructB *ptr_to_B;
};

typedef struct StructB StructB;

void print_structB(StructB* s);
