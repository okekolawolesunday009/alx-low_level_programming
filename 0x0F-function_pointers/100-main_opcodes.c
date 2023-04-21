#include <stdio.h>
#include <string.h>

void print_opcodes(void);

int main(void) {
    print_opcodes();
    return 0;
}

void print_opcodes(void) {
    void *func_ptr = (void *)&print_opcodes;
    char *func_start = (char *)func_ptr;

    size_t func_len = (char *)&print_opcodes - func_start;
     size_t i = 0;
   while (func_len)
   {
      printf("%02x ", *(unsigned char *)(func_start + i));
     i++;
    }
}
