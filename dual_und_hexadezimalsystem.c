#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


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
    assert(strcmp("1010",decimal_to_binary("10"))==0);
    assert(strcmp("10",binary_to_decimal("1010"))==0);

    assert(strcmp("64",decimal_to_hexadecimal("100"))==0);
    assert(strcmp("100",hexadecimal_to_decimal("64"))==0);

    assert(strcmp("64",binary_to_hexadecimal("1100100"))==0);
    assert(strcmp("1100100",hexadecimal_to_binary("64"))==0);


    assert(strcmp("1010",bin_add("10","1000")==0);
    assert(strcmp("10",bin_sub("1010","1000")==0);
    assert(strcmp("1010",bin_mul("101","10")==0);
    assert(strcmp("101",bin_div("1010","10")==0);
    return 0;
}
