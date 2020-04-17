// RectangleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
// https://www.hackerrank.com/challenges/rectangle-area/problem
//

#include <iostream>

using namespace std;

/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
protected:
    int width;
    int height;

public:
    //Rectangle(int, int) : width(-1), height(-1) {}
    Rectangle() {}
    
    void display() {
        cout << width << " " << height << "\n";
    }
};

class RectangleArea : public Rectangle {
public:
    RectangleArea() {}
    
    void read_input() {
        cin >> width;
        cin >> height;
    }
    
    void display() {
        cout << width * height << "\n";
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}