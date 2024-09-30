#include<iostream>
using namespace std;

class Address 
{
    public:
        string houseNumber;
        string city;
        string state;
        string postalCode;

       
        Address(string h_no, string c, string s, string p_code) 
		{
            houseNumber = h_no;
            city = c;
            state = s;
            postalCode = p_code;
        }

        
        void displayAddress() 
		{
            cout << "Address: " << houseNumber << ", " << city << ", " << state << " - " << postalCode << endl;
        }
};


class Student {
    private:
        string name;
        string className;
        int rollNumber;
        float marks;
        Address* address;  

    public:
        
        Student(string n, string c, int r, float m, Address* addr) {
            name = n;
            className = c;
            rollNumber = r;
            marks = m;
            address = addr;
        }

        
        char calculateGrade() 
		{
            if (marks >= 90) return 'A';
            else if (marks >= 80) return 'B';
            else if (marks >= 70) return 'C';
            else if (marks >= 60) return 'D';
            else return 'F';
        }

        
        void displayStudentInfo() 
        {
            cout << "Name: " << name << endl;
            cout << "Class: " << className << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
            cout << "Grade: " << calculateGrade() << endl;
            
            address->displayAddress();
        }
};

int main() {
    
    Address addr("123", "Junagadh", "RJ", "362001");

    
    Student student("Raj Ahir ", "10th Grade", 1, 85.5, &addr);

    
    student.displayStudentInfo();

    return 0;
}
