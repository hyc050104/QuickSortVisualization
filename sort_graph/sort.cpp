#include "head.h"

int divide(iint *a, int low, int high)
{
    int k = a[low].data;
    do
    {
        while (low < high && a[high].data >= k)
            --high;
        if (low < high)
        {
            a[low].data = a[high].data;
            ++low;
        }
        while (low < high && a[low].data <= k)
            ++low;
        if (low < high)
        {
            a[high].data = a[low].data;
            --high;
        }
    } while (low != high);
    a[low].data = k;
    return low;
}
void ssort(iint *a, int low, int high)
{
    Sleep(150);
    int mid;
    if (low >= high)
    {
        a[low].havedone = true;

        draw(a);

        return;
    }
    mid = divide(a, low, high);
    a[mid].havedone = true;

    draw(a);
    ssort(a, low, mid - 1);
    ssort(a, mid + 1, high);
}

void sort(iint *a, int size)
{
    ssort(a, 0, size - 1);
}