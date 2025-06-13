#include <iostream>
using namespace std;


class Shape {
private:
    string color;
    double area;

public:
    
    void setColor( string& c) 
	{
        color = c;
    }

    void setArea(double a) 
	{
        area = a;
    }

   
    string getColor() 
	 {
        return color;
    }

    double getArea() 
	 {
        return area;
    }

    
    virtual void calculateArea() = 0;
    virtual void displayDetails() = 0;

    virtual ~Shape() {} 
};


class Circle : public Shape 
{
	
private:
    double radius;

public:
    Circle(double r,  string& c)
	 {
        radius = r;
        setColor(c);
    }

    void calculateArea() 
	 {
        const double PI = 3.14159;
        setArea(PI * radius * radius);
    }

    void displayDetails()  
	{
        cout << "Shape: Circle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w,  string& c)
	 {
        length = l;
        width = w;
        setColor(c);
    }

    void calculateArea() 
	 {
        setArea(length * width);
    }

    void displayDetails() override
	 {
        cout << "Shape: Rectangle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main() 
{
   
    Shape* shapes[2];

  
    shapes[0] = new Circle(5, "Red");
    shapes[1] = new Rectangle(4, 6, "Blue");

    
    for (int i = 0; i < 2; ++i)
	 {
        shapes[i]->calculateArea();
        shapes[i]->displayDetails();
        cout << endl;
    }

    
    for (int i = 0; i < 2; ++i) 
	{
        delete shapes[i];
    }

    
}

/*
Shape: Circle
Color: Red
Radius: 5
Area: 78.5397

Shape: Rectangle
Color: Blue
Length: 4, Width: 6
Area: 24


*/
