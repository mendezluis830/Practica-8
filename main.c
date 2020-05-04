#include <stdio.h>
#include <stdlib.h>
#include "listen.h"

int main(){
    listen *l;
    l = create_listen();
    insert_listen(l, 6, 0);
    insert_listen(l, 1, 1);
    print_listen(l);
    insert_listen(l, 5, 1);
    insert_listen(l, 4, 1);
    print_listen(l);
    remove_pos(l, 1);
    print_listen(l);
    remove_pos(l, 1);
    remove_pos(l, 1);
    print_listen(l);
    remove_listen(l);
    l = NULL;
    return 0;
}
