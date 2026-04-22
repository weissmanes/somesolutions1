# Debugging

You can use whichever debugger you desire. In this example `gdb` is being used.

Start the debugger with the program in question:

```sh
gdb testVersion
```

Set a breakpoint to the function in question. For this we need to figure out where "stable" and "unstable" is being set. Looking at the *main* file `testVersion.c` we will see that only the function `display_version()` is being called over and over again. 
If we go into the file `version.c` we will see that `display_version()` is defined there. We can also use an LSP or any other desired method to quickly find out where `display_version()` is defined. 
We see that `display_version()` calls the functin `is_unstable()` to determine whether the minor version is stable or unstable.

Quick recall about the ternary operator:

<img src="./stuff/syntax-of-conditional-or-ternary-operator-in-c.png" width="700" alt="ternary">

*Source: https://www.geeksforgeeks.org/c/conditional-or-ternary-operator-in-c/*

