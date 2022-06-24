//////////////////////////////////////////////////////////
// Created by hsl on 2022/6/21.
/*
方法说明 : 依赖倒转原则  测试  void main(){int x = 100;}  TTTTTTSSSS

*/
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

class SafetyDoor{
public:
    virtual void antiheft() = 0;  //防盗
    virtual void fireProof() = 0; //防火
    virtual void waterProof() = 0;//防水
};

///Heima品牌安全门
class HeimaSafetyDoor : public SafetyDoor{
public:
    void antiheft() override {
        cout << "防盗" << endl;

    }

    void fireProof() override {
        cout << "防火" << endl;
    }

    void waterProof() override {
        cout << "防水" << endl;
    }

};



int main(int argc, char *argv[]) {

    HeimaSafetyDoor *heimaSafetyDoor = new HeimaSafetyDoor();
    heimaSafetyDoor->antiheft();
    heimaSafetyDoor->fireProof();
    heimaSafetyDoor->waterProof();


    return 0;
}
