# Donwloading the sources for this lab (Optional procedure)

Optional because you can simply click on the link and proceed that. Therefore the steps below are optional.

- Open a terminal.
- Navigate to the directory in which you want to download the sources.
- Copy the link from the website
- Use the program `curl` or something similar (e.g. wget) and paste the link: `curl <link> --output lab01.tgz`
- Extract the files from the compressed package

# Compilation and Execution

After downloading and extracing the files, open up a terminal, navigate to the folder in which the `Makefile` is and then type `make` and enter. Now run the compiled program:

```sh
./testVersion
```

You should see something like this:

```sh
3.5 (stable)  
3.6 (stable)  
4.0 (stable)  
4.1 (stable)  
```

According to the task, the odd minor versions should be unstable. Therefore the output should have actually looked like this:

```sh
3.5 (unstable)
3.6 (stable)
4.0 (stable)
4.1 (unstable)
```

Answer: No, the stability test is not correct.
