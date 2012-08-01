/*
 * =====================================================================================
 *
 *       Filename:  Euclidean_algorithm.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/06/11 21時54分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int gcd(int a, int b) {

    printf("start!\n");
    printf("a : %d\n", a);
    printf("b : %d\n", b);

    if (a == 0) {
        return b;
    }
    int n = b % a;
    printf("n : %d\n", n);
    printf("a : %d\n", a);
    return gcd(n, a);
}

int main(void) {
    int x, y;

    printf("整数を入力せよ\n");
    scanf("%d", &x);

    printf("整数を入力せよ\n");
    scanf("%d", &y);

    printf("gcd(%d, %d) = %d\n", x, y, gcd(x, y));
    
    return 0;
}
