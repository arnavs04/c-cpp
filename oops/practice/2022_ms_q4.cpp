#include<iostream>
using namespace std;

class Application{
private:
    string applicationName;
public:
    Application(string name = "Web Application"){
        applicationName = name;
    }
    void displayApplication(){
        cout<<"Application Name: "<<applicationName<<endl;
    }
};

class FrontEnd : public Application {
public:
    string frontEndFeature;

    FrontEnd() : frontEndFeature("React Framework") {}

    void displayFrontEnd() {
        cout << "FrontEnd Feature: " << frontEndFeature << endl;
    }
};

class MiddleEnd : public Application {
public:
    string middleEndFeature;

    MiddleEnd() : middleEndFeature("Node.js") {}

    void displayMiddleEnd() {
        cout << "MiddleEnd Feature: " << middleEndFeature << endl;
    }
};

class BackEnd : public Application {
public:
    string backEndFeature;

    BackEnd() : backEndFeature("MySQL Database") {}

    void displayBackEnd() {
        cout << "BackEnd Feature: " << backEndFeature << endl;
    }
};

class System : public FrontEnd, public MiddleEnd, public BackEnd {
public:
    string systemName;

    System() : systemName("System #01") {}

    void displaySystem() {
        cout << "System Name: " << systemName << endl;
        FrontEnd::displayApplication();
        displayFrontEnd();
        displayMiddleEnd();
        displayBackEnd();
    }
};

int main()
{
    System system;
    system.displaySystem();
    return 0;
}