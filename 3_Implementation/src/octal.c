#include"octal.h"
Conversion_oct transformOct(Input_oct a)
{
    int num = a.num, b = a.base;
    int k = 0, store_num = num;
    Conversion_oct res;
    while (num != 0)
    {
        *(res.octal_op + k) = num % b;
        num /= b;
        k++;
    }
    res.arr_l = k;
    if (store_num == 0)
    {
        *(res.octal_op) = 0;
        res.arr_l = 1;
    }
    return res;
}
