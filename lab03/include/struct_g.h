#include<stdio.h>

struct StructG{
    int valueG;
    struct StructN *ptr_to_N;
    struct StructG *ptr_to_G;
};

typedef struct StructG StructG;

void print_structG(StructG* s);
