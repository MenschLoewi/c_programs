#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


//Checkers
bool valid_binary_string(const char *binary);
bool valid_decimal_string(const char *decimal);
bool valid_hexadecimal_string(const char *hexadecimal);

//Conversion functions
char *decimal_to_binary(const char *decimal);
char *binary_to_decimal(const char *binary);

char *decimal_to_hexadecimal(const char *decimal);
char *hexadecimal_to_decimal(const char *hexadecimal);

char *binary_to_hexadecimal(const char *binary);
char *hexadecimal_to_binary(const char *hexadecimal);

//Arithmetic functions
char *bin_add(const char *bin1, const char *bin2);
char *bin_sub(const char *bin1, const char *bin2);
char *bin_mul(const char *bin1, const char *bin2);
char *bin_div(const char *bin1, const char *bin2);

int main(int argc, char *argv[]){
    assert(valid_binary_string("1010")==true);
    assert(valid_binary_string("1210")==false);
    assert(valid_binary_string("abc110")==false);
   
    assert(valid_decimal_string("123")==true);
    assert(valid_decimal_string("1010")==true);
    assert(valid_decimal_string("abc")==false);
    //assert(valid_hexadecimal_string("A0")==true);
    //assert(valid_hexadecimal_stirng("G2H0")==false);

    /*
    assert(strcmp("1010",decimal_to_binary("10"))==0);
    assert(strcmp("10",binary_to_decimal("1010"))==0);
    assert(strcmp("64",decimal_to_hexadecimal("100"))==0);
    assert(strcmp("100",hexadecimal_to_decimal("64"))==0);
    assert(strcmp("64",binary_to_hexadecimal("1100100"))==0);
    assert(strcmp("1100100",hexadecimal_to_binary("64"))==0);
    */
    /*
    assert(strcmp("1010",bin_add("10","1000"))==0);
    assert(strcmp("10",bin_sub("1010","1000"))==0);
    assert(strcmp("1010",bin_mul("101","10"))==0);
    assert(strcmp("101",bin_div("1010","10"))==0);
    */
    return 0;
}

//Check if input is empty or not in [0,1,'\0']
bool valid_binary_string(const char *binary){
    int i = 0;	
    if(binary[0]=='\0')
        return false;
    while(binary[i] == '0' || binary[i] == '1' || binary[i] == '\0'){
	i++;
	if(binary[i]=='\0') return true;
    }
    return false;
}

//check if input is empty or not in [0..9] without leading zero
bool valid_decimal_string(const char *decimal){
    int i = 0;
    if(decimal[0]=='\0' || decimal[0]=='0') return false;
    while(isdigit(decimal[i])){    
        i++;
        if(decimal[i]=='\0') return true;
    }
    return false;
}
