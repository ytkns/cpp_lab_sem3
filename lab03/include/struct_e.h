#include<stdio.h>

struct StructE{
    int valueE;
    struct StructG *ptr_to_G;
};
typedef struct StructE StructE;

void print_structE(StructE* s);
