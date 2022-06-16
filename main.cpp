#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void vecV(int i){
    cout << i << endl;
}

int main(int argc, char *argv[]) {

    vector<int> vec;
    vec.reserve(80);
    vec.push_back(10);
    vec.push_back(12);
    vec.push_back(1);
    vec.push_back(100);
    vector<int> vec2 = vec;
    int Temp = 10000;
    vec.insert(vec.cbegin(),Temp);
    auto *au = vec.data();
    cout << *au;
    vec[1] = 123;


    return 0;
}
