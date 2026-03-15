#include<stdio.h>

struct StructK{
    int valueK;
    struct StructK *ptr_to_K;
    struct StructF *ptr_to_F;
};

typedef struct StructK StructK;

void print_structK(StructK* s);
