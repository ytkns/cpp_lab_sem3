#include<stdio.h>

struct StructI{
    int valueI;
    struct StructB *ptr_to_B;
};

typedef struct StructI StructI;

void print_structI(StructI* s);
