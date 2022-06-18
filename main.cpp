#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
T fun(T a,T b){
    return a+b;
}


int main(int argc, char *argv[]) {

    int a{10},b{12};
    int &c{a};
    cout << a << " " << c << endl;
    c = b;
    cout << c << " " << a << endl;
    int d = fun<int>(10,20);
    cout << d<< endl;
    cout  << "space TS" << endl;


    return 0;
}
