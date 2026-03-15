#include<iostream>

struct slistEl{
    char data;
    slistEl* next;
    };
    
struct slist{
    slistEl *head;
    slistEl *tail;
    };
    
void init(slist *list);

void push_back(slist *list, char val);

void pop_front(slist *list);

slistEl* find(slist *list, char val);

void printl(slist *list);

void clear(slist *list);
