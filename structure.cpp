// // HOW MANY USERS HAVE TO ENTER. n = 10 . INfo of 10 students are taken from user.

// #include<iostream>
// #include<string>
// using namespace std;

// struct Student
// {
//     int rollno;
//     string name;
//     string DOB;


// };

// int main(){
//     Student m1,m2;
//     m1.rollno = 1;
//     m1.name = "Arpita";
//     m2.rollno = 2;
//     m2.name = "Sakshi";
// };



#include<iostream>
using namespace std;

struct Person
{
    int rollno;
    string name;
    string dob;
    Person* link;
};

int main()
{
    int numVariables;

    cout << "Enter the number of students: ";
    cin >> numVariables;
    
    Person p[10];

    for (int i = 0; i < numVariables; ++i) {
        cout << "Enter details for Person " << i + 1 << ":" << endl;

        cout << "Roll Number: ";
        cin >> p[i].rollno;

        cout << "Name: ";
        cin.ignore();
        getline(cin, p[i].name);

        cout << "Date of Birth: ";
        getline(cin, p[i].dob);

        p[i].link = 0;

        cout << endl;
    }

    cout << "\nDetails of the entered persons:" << endl;
    for (int i = 0; i < numVariables; ++i) {
        cout << "Person " << i + 1 << ":" << endl;
        cout << "Roll Number: " << p[i].rollno << endl;
        cout << "Name: " << p[i].name << endl;
        cout << "Date of Birth: " << p[i].dob << endl;
        cout << endl;
    }

    return 0;
}

