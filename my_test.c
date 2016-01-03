
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "src/list.h"

int
main(void){
  list_t *list = list_new();
  list_node_t *a = list_node_new("abc");
  list_node_t *b = list_node_new("bcd");
  list_node_t *c = list_node_new("cde");

  list_rpush(list, a);
  list_rpush(list, b);
  list_rpush(list, c);

  printf("len = %d\n", list->len);

  list_node_t *new_node = list_rpop(list);
  printf("new_node_val: %s\n", new_node->val);

  free(new_node);
  
  list_destroy(list);

  printf("end my_test!\n");
  
  return 0;
}
