#include "head.h"

iint *makerandom()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    // 创建长度为1000的数组，并填充随机值
    iint *arr = new iint[100];
    for (int i = 0; i < 100; ++i)
    {
        arr[i].data = dist(gen);
        arr[i].havedone = false;
    }

    return arr;
}