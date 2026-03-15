#include<stdio.h>

struct StructF{
    int valueF;
    struct StructK *ptr_to_K;
};

typedef struct StructF StructF;

void print_structF(StructF* s);
