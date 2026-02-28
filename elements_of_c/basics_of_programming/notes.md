# Memory layout of a simple program
+------------------+
| Stack            |
| (local vars)     |
+------------------+
| Heap             |
| (malloc)         |
+------------------+
| BSS              |
| Uninitialized    |
+------------------+
| Data             |
| Global vars      |
+------------------+
| Text             |
| Machine code     |
+------------------+

# Compilation process
what is compilation?

Your C code
   ↓
Preprocessor
   ↓
Compiler
   ↓
Assembler
   ↓
Linker
   ↓
Executable file (ELF)

# Executing program

Loader
   ↓
Kernel
   ↓
CPU executes instructions