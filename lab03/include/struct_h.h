#include<stdio.h>

struct StructH{
    int valueH;
    struct StructI *ptr_to_I;
};

typedef struct StructH StructH;

void print_structH(StructH* s);
