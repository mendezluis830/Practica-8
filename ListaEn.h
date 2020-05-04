#ifndef Listen_H
#define Listen_H

#include "dnode.h"

typedef struct _listen listen;

struct _listen{
    dnode *head;
    dnode *tail;
    int num;
};

listen *create_listen();
bool remove_listen(listen *l);

bool insert_init(listen *l, DATA data);
bool insert_end(listen *l, DATA data);
bool insert_listen(listen *l, DATA data, int pos);

bool remove_init(listen *l);
bool remove_end(listen *l);
bool remove_pos(listen *l ,int pos);

DATA search_listen(listen *l, int pos);
int locate_listen(listen *l, DATA data);

void print_listen(listen *l);

bool is_empty_listen(listen *l);
void empty_listen(listen *l);

bool delete_data(listen *l, DATA data);
#endif
