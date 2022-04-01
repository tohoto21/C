#include <stdio.h>

int put_sum(int *num, int *nam, int *nem){
    int sum;
    sum = *num + *nam + *nem;
    return sum;
}

int put_comp(int *num, int *nam, int *nem){
    int comp;
    comp = (*num) * (*nam) *  (*nem);
    return comp;

}

int get_and_zero(int* num){
    int digit = *num;   
    *num *= 0;
    return digit;
}



int main(){
    int num = 11;
    int nam = 12;
    int nem = 13;
    int refund;
    

    refund = get_and_zero(&num);
    printf("get_and_zero:%d %d\n",num,refund);

    refund = put_sum(&num, &nam, &nem);
    printf("put_sum:%d %d %d %d\n", num, nam, nem, refund);

    return 0;
} 