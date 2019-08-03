#include <stdio.h>
#include <stdlib.h>


char *decimal_to_binary(const char *decimal);
char *binary_to_decimal(const char *binary);

char *decimal_to_hexadecimal(const char *decimal);
char *hexadecimal_to_decimal(const char *hexadecimal);

char *binary_to_hexadecimal(const char *binary);
char *hexadecimal_to_binary(const char *hexadecimal);

char *bin_add(const char *bin1, const char *bin2);
char *bin_sub(const char *bin1, const char *bin2);
char *bin_mul(const char *bin1, const char *bin2);
char *bin_div(const char *bin1, const char *bin2);

int main(int argc, char *argv[]){
    puts("Hello, Dual");
    return 0;
}
