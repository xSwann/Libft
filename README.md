# Libft (42)

> A custom C standard library implementation developed as part of the 42 curriculum. It contains **re-implemented standard C functions** and **utility functions** for string manipulation, memory handling, and basic operations.

---

## 🚀 Purpose

Libft is a foundational library used in most C projects at 42. It provides **reliable and reusable functions** to avoid repeatedly writing boilerplate logic.

This project reinforces:

* Memory management in C
* Pointer manipulation
* String handling
* Clean and reusable code design

---

## 📌 Features

✅ Replacement of standard libc functions (`memset`, `strlen`, `strdup`, etc.)
✅ String and memory manipulation
✅ Character type checks and conversions (`ft_isalpha`, `ft_toupper`, etc.)
✅ Custom utility functions (`ft_split`, `ft_itoa`, etc.)
✅ Fully written in **C** and compiled using a **Makefile**

---

## 🔧 Compilation

Build the library:

```bash
make
```

Clean object files:

```bash
make clean
```

Recompile:

```bash
make re
```

Remove objects and library file:

```bash
make fclean
```

This generates `libft.a`, a static library you can link with your C programs.

---

## ▶️ Usage example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *text = ft_strdup("Hello Libft!");
    printf("%s
", text);
    free(text);
    return 0;
}
```

Compile with:

```bash
gcc main.c libft.a -I .
```

---

## 📁 Project structure

```
Libft/
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
├── ft_itoa.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_putchar_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_putstr_fd.c
├── ft_split.c
├── ft_strchr.c
├── ft_strdup.c
├── ft_striteri.c
├── ft_strjoin.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strmapi.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_strtrim.c
├── ft_substr.c
├── ft_tolower.c
├── ft_toupper.c
├── libft.h
└── Makefile
```

---

## 🧼 Code style & quality

* Compliant with **42 Norminette**
* No external libraries allowed
* Static library `libft.a` produced

---

## 👤 Author

* Swann — @xSwann

---

## ✅ About this project

Libft is the **first step** of the 42 journey and is **required** to build future projects such as `get_next_line`, `push_swap`, `minishell`, and more.
