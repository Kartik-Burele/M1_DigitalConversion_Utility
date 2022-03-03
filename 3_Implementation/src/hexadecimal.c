#include"hexadecimal.h"
Conversion_hex transformHexadecimal(Input_hex a)
{
    int num = a.num, b = a.base;
    int k = 0, store_num = num;
    Conversion_hex res;
    while (num != 0)
    {
        if (num % b < 10)
        {
            *(res.hexadecimal_op + k) = 48 + num % b;
            k++;
        }
        else
        {
            *(res.hexadecimal_op + k) = 55 + num % b;
            k++;
        }
        num = num / b;
    }
    res.arr_l = k;
    if (store_num == 0)
    {
        *(res.hexadecimal_op) = 48;
        res.arr_l = 1;
    }
    return res;
}
