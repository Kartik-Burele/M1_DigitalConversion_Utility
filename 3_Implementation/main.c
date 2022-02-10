/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief this file contains main functions
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <string.h>
#include "inc/binary.h"
#include "inc/octal.h"
#include "inc/hexadecimal.h"

/**
 * @brief Main function
 * 
 * @return int 
 */
int main()
{
    
    int temp;
    printf("Enter the input number which has to be converted: \n");
    scanf("%d", &temp);
    printf("\nOUTPUTS:\n\n");
    /**
     * @brief Binary conversion code
     * 
     */
    Input_bin bin;
    Conversion_bin res_bin;
    bin.num=temp;
    bin.base = 2;
    res_bin = transformBinary(bin);
    int u = res_bin.arr_l;
    printf("Binary form: ");
    for (int i = u - 1; i >= 0; i--)
    {
        printf("%d", *(res_bin.binary_op + i));
    }

    /**
     * @brief Octal conversion code
     * 
     */
    Input_oct oct;
    Conversion_oct res_oct;
    oct.num = temp;
    oct.base = 8;
    res_oct = transformOct(oct);
    int v = res_oct.arr_l;
    printf("\nOctal form: ");
    for (int i = v - 1; i >= 0; i--)
    {
        printf("%d", *(res_oct.octal_op + i));
    }
    
    /**
     * @brief Hexadecimal conversion code
     * 
     */
    Input_hex hexa;
    Conversion_hex res_hexa;
    hexa.num = temp;
    hexa.base = 16;
    res_hexa = transformHexadecimal(hexa);
    int w = res_hexa.arr_l;
    printf("\nHexadecimal form: ");
    for (int i = w - 1; i >= 0; i--)
    {
        printf("%c", *(res_hexa.hexadecimal_op + i));
    }
}
