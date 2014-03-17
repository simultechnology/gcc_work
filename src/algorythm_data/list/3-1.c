/*
 * =====================================================================================
 *
 *       Filename:  3-1.c
 *
 *    Description:  
 *
 *
 *        Version:  1.0
 *        Created:  2014/03/18 01時59分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define NMAX 10

int main(void) {
    int buf, sum, count, n;
    int array[NMAX];

    count = 0;
    do {
        printf("整数を入力して下さい(0を入力すると終了):");
        scanf("%d", &buf);
        if (buf) {
            array[count] = buf;
            count++;
        }
    } while (buf != 0);

    printf("--入力されたのは以下の数です--\n");
    for (sum = n = 0; n < count; n++) {
        printf("%d \t", array[n]);
        sum += array[n];
    }
    printf("\n---\n以上の数の合計値は%dです。\n", sum);

    return EXIT_SUCCESS;
}
