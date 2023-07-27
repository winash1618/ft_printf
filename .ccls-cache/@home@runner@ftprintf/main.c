#include <stdio.h>
#include "includes/ft_printf.h"


int main() {
    int num = 42;
    double floatNum = 3.14159;
    // char character = 'A';
    // char* string = "Hello, world!";
    // unsigned int uNum = 123456;
    // void* pointer = &num;

    // printf("1: %-10d-\n", num);        // Left-justify, minimum width 10
    // ft_printf("2: %%d", num);        // Zero-padding, minimum width 10
    // ft_printf("3: %.4d-\n", num);         // Precision of 4 (zero-padding if necessary)
    ft_printf("4: % 0+010d-----\n", num);      // Left-justify, minimum width 10, precision of 4
    // ft_printf("5: %#x-\n", num);     // Print hexadecimal number with 0x prefix
    // printf("7: %#08x-\n", num);   // Print hexadecimal number with 0x prefix, zero-padded to width 8
    // ft_printf("8: %-+10.d-\n", num);  // Print floating-point number with a plus sign and 2 decimal places
    // printf("9: % f-\n", floatNum);      // Print floating-point number with a space if positive

    // // Examples with the 's' conversion specifier
    // printf("10: %-15s-\n", string);    // Left-justify the string, minimum width 15
    // printf("11: %.8s-\n", string);     // Print up to 8 characters of the string

    // // Examples with the 'p' conversion specifier
    // printf("12: %p-\n", pointer);      // Print the pointer address in hexadecimal

    // // Examples with the 'd' and 'i' conversion specifiers
    // printf("13: %+d-\n", num);         // Print signed decimal number with a plus sign
    // printf("14: % d-\n", num);         // Print signed decimal number with a space if positive
    // printf("15: %010d-\n", num);       // Zero-pad the decimal number, minimum width 10

    // // Examples with the 'u' conversion specifier

    // // Examples with the 'x' and 'X' conversion specifiers
    // printf("16: %#08x-\n", num);       // Print hexadecimal number with 0x prefix, zero-padded to width 8
    // printf("17: %#08X-\n", num);       // Print hexadecimal number with 0X prefix, zero-padded to width 8

    // // Examples with the '%' conversion specifier
    // printf("18: %-10%-\n");            // Left-justify the percent sign, minimum width 10
    // printf("19: %05%-\n");             // Zero-pad the percent sign, minimum width 5

    // // Examples with multiple flags combined
    // printf("20: %-10.4d-\n", num);     // Left-justify, minimum width 10, precision of 4
    // printf("21: %+#.2f-\n", floatNum); // Print floating-point number with a plus sign and 2 decimal places
    // printf("22: % f-\n", floatNum);    // Print floating-point number with a space if positive

    return 0;
}
