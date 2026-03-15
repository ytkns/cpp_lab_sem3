#include "List.h"
using namespace std;

void init(slist *list)
{
    list->head = NULL;
    list->tail = NULL;
}

void push_back(slist *list, char val)
{
	slistEl* el = new slistEl;
	el->data = val;
	el->next = NULL;
	
	if(list->tail)
		list->tail->next = el;
	else
		list->head = el;

	list->tail = el;
}


void pop_front(slist *list)
{
   if(list->head)
   {
	slistEl* cur = list->head->next;
	delete list->head;
	list->head = cur;        
    }
}

slistEl* find(slist *list, char val)
{
    slistEl *cur = list->head;
    while(cur)
        {
            if(cur->data == val)
                return cur;
             cur = cur->next;
        }
    return 0;
}

void printl(slist *list)
{
    cout << "Moja lista: <";
    slistEl* cur = list->head;
    if(!list->head)
        cout << "empty list" << endl;
    else
        {
            while(cur)
            {
                cout << cur->data;
                cur = cur->next;
             }
             cout << ">" << endl;
         }
}

void clear(slist *list)
{
    slistEl* cur = list->head;
    if(!cur)
        cout << "empty list";
    else
    {
        while(cur)
        {
             slistEl* temp = cur->next;
             delete cur;
             cur = temp;
        }
     }
	list->head =  NULL;
}
    
