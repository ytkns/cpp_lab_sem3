#include<stdio.h>

struct StructJ{
    int valueJ;
    struct StructH *ptr_to_H;
};

typedef struct StructJ StructJ;

void print_structJ(StructJ* s);
