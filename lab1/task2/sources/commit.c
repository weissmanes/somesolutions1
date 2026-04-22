#include "commit.h"
#include <stdio.h>

int main() {
  struct commit c;
  printf("%p", &c);
  /*
  printf("%p", &(c->id));
  printf("%p", &(c->version);
  printf("%p", &(c->comment));
  printf("%p", &(c->next));
  printf("%p", &(c->prev));
  */
}
