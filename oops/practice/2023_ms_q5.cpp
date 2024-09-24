#include<iostream>
#include<string>
using namespace std;

class Date{
    int d, m, y;
    public:
    Date(){
        cout << "No date provided." << endl;
        exit(0);
    }
    Date(int dd,int mm,int yyyy){
        d = dd;
        m = mm;
        y = yyyy;
    }
    Date(const char *date){
        sscanf (date, "%d %*c %d %*c %d", &d, &m, &y);
    }
    void showDate()
    {
        cout << d << "/" << m << "/" << y << endl;
    }
};

class Employee{
    int Emp_ID , Emp_basic_salary;
    string Emp_name;
    Date *dob;
    public:
    Employee(){
        cout << "No information provided." << endl;
        exit(0);
    }
    Employee(int id,int salary,string name,int dd,int mm,int yyyy){
        Emp_ID = id;
        Emp_basic_salary = salary;
        Emp_name = name;
        dob = new Date(dd,mm,yyyy);
    }
    Employee(int id,int salary,string name,const char *date){
        Emp_ID = id;
        Emp_basic_salary = salary;
        Emp_name = name;
        dob = new Date(date);
    }
    Employee(int id,int salary,string name,Date *date){
        Emp_ID = id;
        Emp_basic_salary = salary;
        Emp_name = name;
        dob = date;
    }
    void showEmployee(){
        cout << "Employee ID: " << Emp_ID << endl;
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee Basic Salary: " << Emp_basic_salary << endl;
        cout << "Employee Date of Birth: ";
        dob->showDate();
    }
};

int main()
{
    Date d1("12/12/2000");
    Employee e1(1,10000,"John Doe",&d1);
    e1.showEmployee();
    return 0;
}