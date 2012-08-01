/*
 * =====================================================================================
 *
 *       Filename:  bubble_sort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012/05/04 02時01分15秒
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
#include <time.h>

#define N 10
int sort[N];
int count;

void BubbleSort(void) {
    int i, j, flag;
    

    count = 0;
    do {
        flag = 0;
        for (i = 0; i < N - 1; i++) {
            count++;
            if (sort[i] > sort[i + 1]) {
                flag = 1;
                j = sort[i];
                    sort[i] = sort[i + 1];
                    sort[i + 1] = j;
            }
        }
    } while (flag == 1);
}

int main(void)
{
    int i;

    srand((unsigned int)time(NULL));

    printf("sort prepare : \n");
    for (i = 0; i < N; i++) {
        sort[i] = rand();
        printf("%d ", sort[i]);
    }

    printf("\nsort start : \n");
    BubbleSort();

    printf("\nsort end : \n");
    
    for (i = 0; i < N; i++) {
        printf("%d ", sort[i]);
    }
    printf("\n");
    printf("total count : %d\n", count);

    return EXIT_SUCCESS;
}

