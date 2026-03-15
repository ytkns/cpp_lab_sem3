#include<stdio.h>

struct StructN{
    int valueN;
    struct StructL *ptr_to_L;
};

typedef struct StructN StructN;

void print_structN(StructN* s);
