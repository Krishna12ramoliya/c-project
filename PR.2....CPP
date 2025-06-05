#include <iostream>

using namespace std;


class Train {
private:
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];
    static int trainCount;

public:
    
    Train() {
        trainNumber = 0;
        strcpy(trainName, "");
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(trainTime, "");
        trainCount++;
    }

     
    Train(int tNo, const char* tName, const char* src, const char* dest, const char* tTime) {
        trainNumber = tNo;
        strcpy(trainName, tName);
        strcpy(source, src);
        strcpy(destination, dest);
        strcpy(trainTime, tTime);
        trainCount++;
    }


    ~Train() {
        trainCount--;
    }


    void setTrainNumber(int tNo) { trainNumber = tNo; }
    int getTrainNumber()   {return trainNumber; }

    void setTrainName( char* tName) { strcpy(trainName, tName); }
     char* getTrainName()  { return trainName; }

    void setSource( char* src) { strcpy(source, src); }
     char* getSource()  { return source; }

    void setDestination( char* dest) { strcpy(destination, dest); }
     char* getDestination()  { return destination; }

    void setTrainTime( char* tTime) { strcpy(trainTime, tTime); }
     char* getTrainTime()  { return trainTime; }

   
    void inputTrainDetails() {
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cin.ignore();
        cout << "Enter Train Name: ";
        cin.getline(trainName, 50);
        cout << "Enter Source: ";
        cin.getline(source, 50);
        cout << "Enter Destination: ";
        cin.getline(destination, 50);
        cout << "Enter Train Time: ";
        cin.getline(trainTime, 10);
    }

  
    void displayTrainDetails() const {
        cout << "Train Number: " << trainNumber << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Train Time: " << trainTime << endl;
        cout << "-------------------------------" << endl;
    }

   
    static int getTrainCount() {
        return trainCount;
    }
};


int Train::trainCount = 0;


class RailwaySystem {
private:
    Train trains[100];
    int totalTrains;

public:
    RailwaySystem() {
        totalTrains = 0;
    }

   
    void addTrain() {
        if (totalTrains < 100) {
            cout << "\nAdding Train Record #" << (totalTrains + 1) << endl;
            trains[totalTrains].inputTrainDetails();
            totalTrains++;
        } else {
            cout << "Train database is full!" << endl;
        }
    }

   
    void displayAllTrains() const {
        if (totalTrains == 0) {
            cout << "No train records available." << endl;
            return;
        }
        cout << "\n--- All Train Records ---" << endl;
        for (int i = 0; i < totalTrains; i++) {
            trains[i].displayTrainDetails();
        }
    }

    
    void searchTrainByNumber(int number) const {
        bool found = false;
        for (int i = 0; i < totalTrains; i++) {
            if (trains[i].getTrainNumber() == number) {
                cout << "\nTrain found:" << endl;
                trains[i].displayTrainDetails();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "No train found with number " << number << "." << endl;
        }
    }
};


int main() {
    RailwaySystem rs;

   
    cout << "Enter details for at least 3 trains:\n";
    for (int i = 0; i < 3; i++) {
        rs.addTrain();
    }

    int choice;
    do {
        cout << "\n===== Railway System Menu =====" << endl;
        cout << "1. Add Train" << endl;
        cout << "2. Display All Trains" << endl;
        cout << "3. Search Train by Number" << endl;
         cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                rs.addTrain();
                break;
            case 2:
                rs.displayAllTrains();
                break;
            case 3: {
                int tNo;
                cout << "Enter Train Number to Search: ";
                cin >> tNo;
                rs.searchTrainByNumber(tNo);
                break;
            }
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);

    
}
/*
Enter details for at least 3 trains:

Adding Train Record #1
Enter Train Number: 1010
Enter Train Name: okha express
Enter Source: surat
Enter Destination: goa
Enter Train Time: 5AM

Adding Train Record #2
Enter Train Number: 1012
Enter Train Name: rajdhni
Enter Source: mumbai
Enter Destination: delhi
Enter Train Time: 10PM

Adding Train Record #3
Enter Train Number: 1015
Enter Train Name: vande bharat express
Enter Source: surat
Enter Destination: pune
Enter Train Time: 12PM

===== Railway System Menu =====
1. Add Train
2. Display All Trains
3. Search Train by Number
4. Display Total Train Count
0. Exit
Enter your choice: 2

--- All Train Records ---
Train Number: 1010
Train Name: okha express
Source: surat
Destination: goa
Train Time: 5AM
-------------------------------
Train Number: 1012
Train Name: rajdhni
Source: mumbai
Destination: delhi
Train Time: 10PM
-------------------------------
Train Number: 1015
Train Name: vande bharat express
Source: surat
Destination: pune
Train Time: 12PM
-------------------------------

===== Railway System Menu =====
1. Add Train
2. Display All Trains
3. Search Train by Number
4. Display Total Train Count
0. Exit
Enter your choice: 1010
Invalid choice. Try again.

===== Railway System Menu =====
1. Add Train
2. Display All Trains
3. Search Train by Number
4. Display Total Train Count
0. Exit
Enter your choice: 3
Enter Train Number to Search: 10155
No train found with number 10155.

===== Railway System Menu =====
1. Add Train
2. Display All Trains
3. Search Train by Number
4. Display Total Train Count
0. Exit
Enter your choice: 0
Exiting program. Goodbye!

--------------------------------
*/