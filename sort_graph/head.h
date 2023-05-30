#ifndef MYFILE_H
#define MYFILE_H
#include <iostream>
#include <graphics.h>

using namespace std;
struct iint
{
    int data;
    bool havedone;
};
#include <random>
void draw(iint *a);
void sort(iint *a, int size);
void ssort(iint *a, int low, int high);
int divide(iint *a, int low, int high);
iint *makerandom();
#endif