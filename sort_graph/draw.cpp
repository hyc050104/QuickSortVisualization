#include "head.h"
void draw(iint *a)
{
    BeginBatchDraw();

    for (int i = 0; i < 100; i++)
    {
        int x = i * 10;
        setaspectratio(1, 1); // 长方形的 y 坐标，保持底边在窗口底
        setfillcolor(BLACK);
        setlinecolor(BLACK);
        fillrectangle(x, 0, x + 10, 500);
    }
    for (int i = 0; i < 100; i++)
    {

        int height = a[i].data; // 长方形的高度等于数组元素的值
        int x = i * 10;         // 长方形的 x 坐标
        int y = 500 - 5 * height;

        if (a[i].havedone)
        {
            setaspectratio(1, 1);
            setfillcolor(GREEN);
            setlinecolor(BLACK);
            fillrectangle(x, y, x + 10, 500); // 绘制长方形
        }
        else
        {

            setaspectratio(1, 1);
            setfillcolor(RED);
            setlinecolor(BLACK);
            fillrectangle(x, y, x + 10, 500);
        }
    }
    EndBatchDraw();
}