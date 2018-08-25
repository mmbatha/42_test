# Usage
This assumes you have a *main.c* file that allocates memory but doesn't deallocate it. This is what causes leaks.
Here are the steps to finding out exactly where you've allocted without freeing.

# Step 1
Download the following files to your project folder: *leak_detector_c.h*, *leak_detector_c.c* and *main.c*(optional)

# Step 2
To test the memory leak, just add the *leak_detector_c.h* file to the faulty main (or whatever you called it) and add the following line to the start of your main function:
	`atexit(report_mem_leak);`

# Step 3
Now compile the code and run the program:
```
$> gcc -c leak_detector_c.c
$> gcc -c main.c
$> gcc -o memtest leak_detector_c.o main.o
$> ./memtest
$> cat leak_info.txt
```

# Step 4
Now you'll get an output similar to the one shown below:
```
Memory Leak Summary
-----------------------------------
address : 0x7f81124026e0
size    : 1 bytes
file    : main.c
line    : 23
-----------------------------------
address : 0x7f81124026f0
size    : 40 bytes
file    : main.c
line    : 24
-----------------------------------
address : 0x7f8112402720
size    : 60 bytes
file    : main.c
line    : 25
-----------------------------------
```

# "What am I looking at?"

The output shows the file name and line number which is causing the memory leak(s) and now you can free the unallocated memory.
If you have multiple source files, you can add the header file link in all the files where you suspect that memory is leaking and compile the program as above.

# "How does it work?"
The *leak_detector_c.h* file contains some macros and the preprocessor replaces the call of `malloc`, `calloc` and `free` functions with `xmalloc`, `xcalloc` and `xfree` respectively.

While calling `malloc()`, our `xmalloc()` is called and we keep all information of the allocated memory (like the address, size, file name and line number) in a linked list. While the code calls the `free()` function, it actually calls our `xfree()` and we manage to do the cleanup task (remove the entry of the allocated memory from the list and free up the allocated memory).

At the end of the program, we can get the unallocated memory references from the list.

The line `atexit(report_mem_leak)` registers the `report_mem_leak()` function to be called at the end of the execution of the program and this function writes the memory leak summary into the *leak_info.txt* file.

# Disclaimer
This "project" is an updated version of the following article:

[Memory Leak Detection in C](https://www.codeproject.com/Articles/19361/Memory-Leak-Detection-in-C)

It was created to work with projects done at your nearest 42 School.
