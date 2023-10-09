#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"
#include "history.h"

List* init_history(){
  List *list = (List*)malloc(sizeof(List));
  list->root = NULL;
  return list;
}

void add_history(List *list, char *str){
  
}
