#include<stdio.h>

struct StructO{
    int valueO;
    struct StructM *ptr_to_M;
};

typedef struct StructO StructO;

void print_structO(StructO* s);
