#include <iostream>
#include <numeric>  



void inplace_swap(int *x, int *y) {
    *y = *x ^ *y; /* Step 1 */
    printf("%d", *y);
    *x = *x ^ *y; /* Step 2 */
    printf("%d", *x);
    *y = *x ^ *y  /* Step 3 */;
    printf("%d", *y);
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt - 1;
        first <= last;
        first++, last--)
        inplace_swap(&a[first], &a[last])

}

int main() {
    





    return 0;
    //int val = 0x87654321;
    //byte_pointer valp = (byte_pointer) & val;
}