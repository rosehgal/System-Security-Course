- First of all compile **ld_preload_example_1.c** file
```Shell
    gcc -o ld_preload_example_1 ld_preload_example_1.c
```

- Now compile **our_rand.c** file and make shared dynamic library
```Shell
    gcc -fPIC -shared our_rand.c -o our_rand.so
```

- Now before running **ld_preload_example_1** executble, make sure to export shared library file in **LD_PRELOAD** environment variable
````Shell
    export LD_PRELOAD=./our_rand.so
    ./ld_preload_example_1
````

- Same proccess for **ld_preload_example_2.c** and **our_printf.c**
````Shell
    gcc -o ld_preload_example_2 ld_preload_example_2.c
    gcc -fPIC -shared our_rand.c -o our_rand.so -ldl
    export LD_PRELOAD=./our_printf.so
    ./ld_preload_example_2
````

