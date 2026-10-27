/* bubble_sort.c - バブルソートで整数配列を昇順に並べ替える */
#include <stdio.h>

static void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
                swapped = 1;
            }
        }
        if (!swapped) break;   /* 交換がなければ整列済み */
    }
}

int main(void)
{
    int a[] = {5, 2, 9, 1, 7, 3};
    int n = sizeof a / sizeof a[0];

    bubble_sort(a, n);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
