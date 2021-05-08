#include <iostream>
#include <fstream>

using namespace std;


class Student{
    public:
    string name;
    int roll;
    string department;

    friend ofstream & operator<<(ofstream &out, Student &s);
    friend ifstream & operator>>(ifstream &in, Student &s);



};



int main(){

    ofstream file("student.txt");
    Student s1;
    s1.name = "Prachi";
    s1.roll = 1;
    s1.department = "History";
    file<<s1;
    file.close();

    ifstream infile("student.txt");

    Student s1Copy;
    infile>>s1Copy;
    cout<<s1Copy.name;



    return 0;
}

ofstream & operator<<(ofstream &out, Student &s){
    out<<s.name<<endl;
    out<<s.roll<<endl;
    out<<s.department<<endl;

    return out;
}

ifstream & operator>>(ifstream &in, Student &s){
    in>>s.name>>s.roll>>s.department;
    return in;
}
