// AttributeParser.cpp : This file contains the 'main' function. Program execution begins and ends there.
// https://www.hackerrank.com/challenges/attribute-parser/problem
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // User input data
    int n, q, i;
    cin >> n >> q;
    string temp;
    vector<string> hrml;
    vector<string> quer;
    cin.ignore();

    for (i = 0; i < n; ++i)
    {
        getline(cin, temp);
        hrml.push_back(temp);
    }
    for (i = 0; i < q; ++i)
    {
        getline(cin, temp);
        quer.push_back(temp);
    }

    map<string, string> m;
    vector<string> tag;

    // Map the string and erase the irrelevant data from the given string.
    for (i = 0; i < n; ++i)
    {
        temp = hrml[i];
        temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());

        if (temp.substr(0, 2) == "</")
            tag.pop_back();
        else {
            stringstream ss;
            ss.str("");
            ss << temp;
            string t1, p1, v1;
            char ch;
            ss >> ch >> t1 >> p1 >> ch >> v1;
            string temp1 = "";
            if (tag.size() > 0)
            {
                temp1 = *tag.rbegin();
                temp1 = temp1 + "." + t1;
            }
            else {
                temp1 = t1;
            }
            tag.push_back(temp1);
            m[*tag.rbegin() + "~" + p1] = v1;

            while (ss)
            {
                ss >> p1 >> ch >> v1;
                m[*tag.rbegin() + "~" + p1] = v1;
            }
        }
    }

    // If the tag is match, then it will print the corrispondent value.
    for (i = 0; i < q; ++i)
    {
        if (m.find(quer[i]) == m.end())
            cout << "Not Found!\n";
        else {
            cout << m[quer[i]] << endl;
        }
    }

    return 0;
}
