#include "commit.h"
#include <stdio.h>

struct commit *commit_of(struct version *version)
{
  struct commit *c = 0;
  void *offset = &c->version;
  printf("%p\n", offest);
  return (struct commit*) ((void *)vesrsion - offset);
}

int main() {
  struct commit c;
  printf("%p\n", &c);
  printf("%p\n", &c.id);
  printf("%p\n", &c.version);
  struct commit *c2 = commit_of(&c.version);
  printf("%p\n", c2);
}
