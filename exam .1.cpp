#include <iostream>
using namespace std;

class Laptop {
private:
    string name;
    float price;
    string processor;

public:
    
    Laptop(string n, float p, string proc) 
	{
        name = n;
        price = p;
        processor = proc;
    }

    
    void displayDetails() {
        cout << "Laptop Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Processor: " << processor << endl;
    }
};

int main()
 {
    
    Laptop laptop1("Dell Inspiron", 799.99, "Intel Core i5");
    Laptop laptop2("HP Pavilion", 899.49, "AMD Ryzen 7");

    
    cout << "Laptop 1 details:\n";
    laptop1.displayDetails();

    cout << "\nLaptop 2 details:\n";
    laptop2.displayDetails();

   
}
/*
Laptop 1 details:
Laptop Name: Dell Inspiron
Price: $799.99
Processor: Intel Core i5

Laptop 2 details:
Laptop Name: HP Pavilion
Price: $899.49
Processor: AMD Ryzen 7
*/
