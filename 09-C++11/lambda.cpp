#include <iostream>

using namespace std;

int main(){
    //[capture_list](parameter_list)->return_type{function_body}call
    
    [](){cout<<"This is a lambda function!\n";}();
    [](int x, int y){cout<<(x > y)<<endl;}(3, 4);

    auto f = [](int n){cout<<"This is "<<n<<endl;};
    f(3);

    return 0;
}