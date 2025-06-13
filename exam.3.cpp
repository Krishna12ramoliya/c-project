#include <iostream>
using namespace std;

class Shape {
private:
    string color;
    float area;

public:
    void setColor(string c) 
	{
        color = c;
    }

    string getColor() 
	{
        return color;
    }

    void setArea(float a) 
	{
        area = a;
    }

    float getArea() 
	{
        return area;
    }
};

class Circle : public Shape
 {
private:
    float radius;

public:
    void setRadius(float r)
	 {
        radius = r;
    }

    void calculateArea() 
	{
        float area = 3.14 * radius * radius;
        setArea(area);
    }

    void display() {
        cout << "Circle Color: " << getColor() << endl;
        cout << "Circle Area: " << getArea() << endl;
    }
};

class Rectangle : public Shape
 {
private:
    float length, width;

public:
    void setDimensions(float l, float w)
	 {
        length = l;
        width = w;
    }

    void calculateArea() 
	{
        float area = length * width;
        setArea(area);
    }

    void display() 
	{
        cout << "Rectangle Color: " << getColor() << endl;
        cout << "Rectangle Area: " << getArea() << endl;
    }
};

int main() 
{
    Circle c;
    c.setColor("Red");
    c.setRadius(5);
    c.calculateArea();
    c.display();

    cout << endl;

    Rectangle r;
    r.setColor("Blue");
    r.setDimensions(4, 6);
    r.calculateArea();
    r.display();

    
}
/*
Circle Color: Red
Circle Area: 78.5

Rectangle Color: Blue
Rectangle Area: 24
*/
