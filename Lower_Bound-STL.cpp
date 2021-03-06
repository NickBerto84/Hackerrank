// Lower_Bound-STL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
https://www.hackerrank.com/challenges/cpp-lower-bound/problem

You are given  integers in sorted order. Also, you are given  queries. In each query, you will be given an integer and you have to tell 
whether that integer is present in the array. If so, you have to tell at which index it is present and if it is not present, you have to 
tell the index at which the smallest integer that is just greater than the given number is present.

Lower bound is a function that can be used with a sorted vector. Learn how to use lower bound to solve this problem by Clicking Here.

Input Format

The first line of the input contains the number of integers . 
The next line contains integers in sorted order. 
The next line contains, the number of queries. 
Then lines follow each containing a single integer .

Note that if the same number is present multiple times, you have to print the first index at which it occurs. 
Also, the input is such that you always have an answer for each query.

,where  is  element in the array.

Output Format

For each query you have to print "Yes" (without the quotes) if the number is present and at which index(1-based) it is present 
separated by a space.

If the number is not present you have to print "No" (without the quotes) followed by the index of the next smallest number just 
greater than that number.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int m, num;
    cin >> m;
    vector <int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    int n, val;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        vector <int>::iterator low = lower_bound(v.begin(), v.end(), val);
        
        if (v[low - v.begin()] == val)
            cout << "Yes " << (low - v.begin() + 1) << endl;
        else
            cout << "No " << (low - v.begin() + 1) << endl;
    }

    return 0;
}
