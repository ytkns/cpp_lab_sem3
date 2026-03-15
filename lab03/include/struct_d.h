#include<stdio.h>

struct StructD{
    int valueD;
    struct StructJ *ptr_to_J;
};

typedef struct StructD StructD;

void print_structD(StructD* s);
