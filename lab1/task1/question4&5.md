# Memory footprint

We already took a look at it in Question 2. Here is the implementation (found in `version.h`):

```c
struct version {
	unsigned short major;
	unsigned long minor;
	char flags;
};

```

Here is the footprint:

```gdb
(gdb) ptype /o v
type = struct version {
/*      0      |       2 */    unsigned short major;
/* XXX  6-byte hole      */
/*      8      |       8 */    unsigned long minor;
/*     16      |       1 */    char flags;
/* XXX  7-byte padding   */

                               /* total size (bytes):   24 */
                             } *
```

It is not optimal, because we can fit the char into the 8-Bytes (`unsigned short major` + padding). As a rule of thumb you can simply place the biggest size first.

```c
struct version {
	unsigned long minor;
	unsigned short major;
	char flags;
};
```

Let's see how the footprint looks in `gdb` now.

```gdb
(gdb) ptype /o v
type = struct version {
/*      0      |       8 */    unsigned long minor;
/*      8      |       2 */    unsigned short major;
/*     10      |       1 */    char flags;
/* XXX  5-byte padding   */

                               /* total size (bytes):   16 */
                             } *
```

We now use alltogether 16 Bytes instead of 24 Bytes.
