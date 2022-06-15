#include <iostream>
using namespace std;

class a{
public:
    a(){
        cout << "a" << endl;
    }

};

int main(int argc, char *argv[]) {
    a aa;
    a aaa = aa;
    return 0;
}
