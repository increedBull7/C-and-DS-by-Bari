#include <fstream>
#include <iostream>
using namespace std;

int main(){

    //ios::app for appeding the data

    ofstream outfile("file.txt");
    outfile<<"Atul\n";
    outfile<<"420\n";

    outfile<<"Raining\n";


    outfile.close();


    ifstream infile;
    infile.open("file.txt");

    if(!infile){
        cout<<"File is cannot be located\n";
        return 0;
    }

    int x; string s1, s2;
    infile>>s1>>x>>s2;
    cout<<s1<<x<<s2;

    if(infile.eof()){
        cout<<"End of file reached\n";
    }



    return 0;
}