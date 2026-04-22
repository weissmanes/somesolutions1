# Fixing the faulty function by using struct members

```c
int is_unstable(struct version *v)
{
	//return 1 & ((char *)v)[sizeof(unsigned short)];
	return 1 & v->minor;
}
```

Since `v` is a pointer we use the `->` operator to access its member (`minor`).

# Make

You might have to do

```sh
make clean
```

before you can use

```sh
make
```

again.
