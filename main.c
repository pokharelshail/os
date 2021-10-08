#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
  list_t* list = list_alloc();
  list_add_to_front(list, 4);
  list_add_to_front(list, 3);
  list_add_to_front(list, 2);
  list_add_to_front(list, 1);
  list_print(list); // 1,2,3,4
}
