#include<stdio.h>

struct StructC{
    int valueC;
    struct StructO *ptr_to_O;
};

typedef struct StructC StructC;

void print_structC(StructC* s);
