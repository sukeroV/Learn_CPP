//////////////////////////////////////////////////////////
// Created by hsl on 2022/6/21.
/*
方法说明 : 依赖倒转原则  测试  void main(){int x = 100;}  TTTTTTSSSS

*/
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

class AbstractFruit{
public:
    virtual void ShowName() = 0;
};

class Apple : public AbstractFruit{
public:
    void ShowName() override{
        cout << "苹果" << endl;
    }
};
class Banana : public AbstractFruit{
public:
    void ShowName() override{
        cout << "香蕉" << endl;
    }
};
class Pear : public AbstractFruit{
public:
    void ShowName() override{
        cout << "鸭梨" << endl;
    }
};

class FruitFactory{
public:
    virtual AbstractFruit* setType() = 0;
};

class appleFactory : public FruitFactory{
public:
    AbstractFruit* setType() override{
        return new Apple;
    }
};
class bananaFactory2 : public FruitFactory{
public:
    AbstractFruit* setType() override{
        return new Banana;
    }
};


int main(int argc, char *argv[]) {

    auto applefactory = (new appleFactory())->setType();

    auto bananaFactory = (new bananaFactory2())->setType();
    if(applefactory != nullptr) applefactory->ShowName();
    if(bananaFactory != nullptr) bananaFactory->ShowName();

    return 0;
}
