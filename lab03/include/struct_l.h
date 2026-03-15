#include<stdio.h>

struct StructL{
    int valueL;
    struct StructE *ptr_to_E;
};

typedef struct StructL StructL;

void print_structL(StructL* s);
