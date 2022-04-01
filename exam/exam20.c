#include <stdio.h>

int put_sum(int *arr, int len)
{   
    int sum = 0;
    for(int i = 0; i < len; arr++, i++)
        sum += *arr; 
    return sum;
}

int put_mul(int *arr, int len)
{
    int mul = 1;
    for(int i = 0; i < len; arr++, i++)
        mul *= *arr;
    return mul;
}

int put_sum_mul(int *arr, int len, int (*put)(int *arr, int len_arr))
{
    int res;
    res = put(arr, len);
    return res;
}

int main()
{
    int arr_digit[] = {2, 2, 2, 1};
    int len_arr = 4;
    int res;
    printf("len:%d",len_arr);

    res = put_sum_mul(arr_digit, len_arr, put_sum);
    printf("sum:%d\n", res);

    res = put_sum_mul(arr_digit, len_arr, put_mul);
    printf("mul:%d\n", res);

    return 0;
}