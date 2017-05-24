- First of all create **summerschool.h** file that contains declaration of all functions

- Create **add.c** & **sub.c** files

- Create object files from **add.c** & **sub.c**
```Shell
    gcc -fPIC -c add.c
    gcc -fPIC -c sub.c
```

- Now create a static library file called **libsummerschool.so**
```Shell
    gcc -shared -o libsummerschool.so add.o sub.o
```

- Now create object file for **addDemo.c** file
````Shell
    gcc -c addDemo.c
````

- Copy **libsummerschool.so** file in **/usr/lib** , configure **loader** again and then create executable file
````Shell
    sudo cp libsummerschool.so /usr/lib/
    sudo ldconfig
    gcc -o addDemo addDemo.o -l summerschool
    ./addDemo
````

