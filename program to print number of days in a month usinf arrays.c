#include<stdio.h>
// driver code

int main()

{
    int  arr[12] ={
        31, 28, 31, 30, 31, 30, 31, 31, 31, 30, 31, 30, 31
    };

    // input month

    int N = 4;

    printf("%d days", arr[N-1]);
    return 0;
}