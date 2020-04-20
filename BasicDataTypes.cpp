// BasicDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
//

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;
    
    scanf_s("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    
    printf("%d\n%ld\n%c\n%f\n%lf\n", a, b, c, d, e);

    return 0;
}

