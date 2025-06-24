# 🖨️ ft_printf

**ft_printf** is a custom implementation of the standard C `printf` function. Developed as part of the 42 Network curriculum, this project helps deepen understanding of variadic functions, format parsing, and low-level output formatting.

---

## 🎯 Project Objectives

- Recreate the behavior of the standard `printf` function  
- Support a subset of conversion specifiers and flags  
- Handle variable argument lists with `stdarg.h`  
- Manage output formatting with precision, width, and padding  

---

## 🔧 Features

- Supported conversion specifiers:  
  - `%c` — character  
  - `%s` — string  
  - `%p` — pointer address  
  - `%d` / `%i` — signed decimal integers  
  - `%u` — unsigned decimal integers  
  - `%x` / `%X` — hexadecimal (lowercase/uppercase)  
  - `%%` — literal percent sign  

- Flags supported:  
  - `-` (left-justify)  
  - `0` (zero padding)  
  - Width and precision modifiers  

- Handles NULL pointers and strings gracefully  
- Mimics the behavior of the standard `printf` as closely as possible  

---

## 🛠️ Technologies

- C language  
- Unix/Linux environment  
