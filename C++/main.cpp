#include <iostream>
#include "functions.h"

using namespace std;

int main(){
    cout<<"hello world"<<endl;

    auto c = [](auto x, auto y)->auto{
        return x*y;
    }(3,4.0);

    // auto sum = [](auto i, auto j)->auto{
    //     return i+j;
    // };

    // cout<<"c="<<c<<endl;
    // cout<<"c="<<sum(3,4)<<endl;
    
    // sum();
    numberCounter();

    return 0;
}