#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string contactNo;
    string address;

public:
    // Default constructor - not allowing empty initialization
    Student() {
        cout << "Account creation failed: No information provided." << endl;
        exit(0); // Exiting if no information is provided
    }

    // Constructor for Name only
    Student(string n) {
        if (n == "")
            exit(0); // Prevent blank submissions
        name = n;
        cout << "Account created with Name: " << name << endl;
    }

    // Constructor for Name and Contact No.
    Student(string n, string contact) {
        if (n == "" && contact == "")
            exit(0); // Prevent blank submissions
        name = n;
        contactNo = contact;
        cout << "Account created with Name: " << name << " and Contact No.: " << contactNo << endl;
    }

    // Constructor for Name, Contact No, and Address
    Student(string n, string contact, string addr) {
        if (n == "" && contact == "" && addr == "")
            exit(0); // Prevent blank submissions
        name = n;
        contactNo = contact;
        address = addr;
        cout << "Account created with Name: " << name << ", Contact No.: " << contactNo << " and Address: " << address << endl;
    }

    // Method to override (modify) Name, Contact No., and Address
    void getData(string n = "", string contact = "", string addr = "") {
        if (n != "") name = n;
        if (contact != "") contactNo = contact;
        if (addr != "") address = addr;
        cout << "Updated Information: Name: " << name << ", Contact No.: " << contactNo << ", Address: " << address << endl;
    }
};

int main() {
    // Creating account with only name
    Student s1("John");

    // Modifying the student's information (Name, Contact No., Address)
    s1.getData("John Doe", "1234567890", "New York");

    // Creating account with all details
    Student s2("Jane", "9876543210", "California");

    // Modifying only Contact No. for second student
    s2.getData("", "5555555555", "");

    return 0;
}
