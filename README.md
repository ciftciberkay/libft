*This project has been created as part of the 42 curriculum by beciftci.*

# Libft

A static C library that reimplements selected standard library functions and adds reusable helpers. Public declarations live in [libft.h](./libft/libft.h).

## What it covers

- Character checks and case conversion
- String operations, conversions, and splitting
- Memory operations and allocation
- Output to file descriptors

## Build and link

Run these commands from the repository root with a C compiler and Make.

```sh
make -C libft
cc -Wall -Wextra -Werror -Ilibft main.c libft/libft.a -o demo
```

Provide your own `main.c` and include `libft.h` in it.
