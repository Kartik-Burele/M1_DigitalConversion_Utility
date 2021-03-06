/**
 * @file binary.h
 * @author your name (you@domain.com)
 * @brief  header file for binary (base-2) system
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef BINARY_H_
#define BINARY_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Structures for storing the input & output stream
 * 
 */
typedef struct Conversion_bin
{
    int binary_op[50];
    int arr_l;
} Conversion_bin;
typedef struct Input_bin
{
    long int num;
    int base;
} Input_bin;
Conversion_bin transformBinary(Input_bin a);

/**
 * @brief Function to convert a number from decimal to binary system
 * 
 * @param a 
 * @return Conversion_bin 
 */
// Conversion_bin transformBinary(Input_bin a)
// {
//     int num = a.num, b = a.base;
//     int k = 0, store_num = num;
//     Conversion_bin res;
//     while (num != 0)
//     {
//         *(res.binary_op+k) = num % b;
//         num /= b;
//         k++;
//     }
//     res.arr_l = k;
//     if (store_num == 0)
//     {
//         *(res.binary_op) = 0;
//         res.arr_l = 1;
//     }
//     return res;
// }

#endif