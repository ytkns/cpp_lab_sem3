#include<stdio.h>

struct StructM{
    int valueM;
    struct StructA *ptr_to_A;
};

typedef struct StructM StructM;

void print_structM(StructM* s);
