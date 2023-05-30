#include "head.h"

int main()
{

    initgraph(1000, 500);

    iint *a;
    a = makerandom();
    ExMessage m;
    while (1)
    {
        m = getmessage(EX_MOUSE);
        if (m.message == WM_RBUTTONDOWN)
            break;
    }

    sort(a, 100);
    while (1)
    {
        m = getmessage(EX_MOUSE);
        if (m.message == WM_RBUTTONDOWN)
            break;
    }

    return 0;
}