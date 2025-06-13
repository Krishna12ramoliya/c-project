#include <iostream>
using namespace std;

class FileManager
 {
private:
    string fileData;

public:
  
    void writeToFile( string& data) 
	{
        fileData = data;
        cout << "Simulated: Writing data to file..." << endl;
    }

   
    void readFromFile() 
	{
        cout << "Simulated: Reading data from file..." << endl;
        cout << "File contents:\n" << fileData << endl;
    }
};

int main() 
{
	
    FileManager fm;

    string data;
    cout << "Enter data to write to the file: ";
    getline(cin, data); 

    fm.writeToFile(data);
    cout << endl;
    fm.readFromFile();

   
}
/*
Enter data to write to the file: hello c++.
Simulated: Writing data to file...

Simulated: Reading data from file...
File contents:
hello c++.
*/
