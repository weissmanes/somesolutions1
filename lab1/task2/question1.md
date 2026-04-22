# Builds upon the last task

We can either keep continuing with the files of Task 1. Create a new directory `task2` and copy-paste the files of `task1` into the director `task2`. As always there are lots of ways to solve this Question. 
One way is to create a new file `commit.h` and define the `struct commit` there.

```c
#include "version.h"

struct commit {
    unsigned long id;
    struct version version;
    char *comment;
    struct commit *next;
    struct commit *prev;
};
```
