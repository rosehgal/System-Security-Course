- First of all create **summerschool.h** file that contains declaration of all functions

- Create **add.c** & **sub.c** files

- Create object files from **add.c** & **sub.c**
```Shell
    gcc -c add.c
    gcc -c sub.c
```

- Now create a static library file called **libsummerschool.a** (same as header file name)
```Shell
    ar rs libsummerschool.a add.o sub.o
```

- Now create object file for **addDemo.c** file
````Shell
    gcc -I . -c addDemo.c
````

- Finally statically link library file with **addDemo.o** file
````Shell
    gcc -o addDemo -L . addDemo.o -l summerschool
    ./addDemo
````

