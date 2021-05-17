#include <iostream>
#include <vector>


using namespace std;

int main(){
    vector<int> v;
    v.push_back(44);
    v.push_back(33);
    v.push_back(22);

    vector<int>::iterator itr;

    for(itr = v.begin(); itr != v.end(); itr++)
        cout<<*itr;





    return 0;
}