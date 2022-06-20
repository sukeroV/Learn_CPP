//////////////////////////////////////////////////////////
// Created by hsl on 2022/6/21.
/*
方法说明 : 依赖倒转原则
*/
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;


///小
///何
class HardDisk{
public:
    virtual void save(string data) = 0;
    virtual string get() = 0;
};
class XiJie : public HardDisk{
public:
    void save(string data){cout << "希捷存储数据  " << data << endl;}

    string get()override{
        cout << "使用希捷读取数据" << endl;
        return "数据";
    }
};

class  Cpu{
public:
    virtual void run() = 0;
};
class IntelCpu : public Cpu{
public:
    void run()override{
        cout << "使用Intel处理器" <<endl;
    }
};

class Memory{
public:
    virtual void save() = 0;
};
class KingstonMemory : public Memory{
public:
    void save()override{
        cout << "使用金士顿内存条" << endl;
    }
};

class Computer{

public:
    void run(){
        cout << "运行计算机" << endl;
        string data = hardDisk->get();
        cout << "希捷存储数据  " << data << endl;
        cpu->run();
        memory->save();
    }

    void setMemory(Memory *memory) {
        Computer::memory = memory;
    }
    void setCpu(Cpu *cpu) {
        Computer::cpu = cpu;
    }
    void setHardDisk(HardDisk *hardDisk) {
        Computer::hardDisk = hardDisk;
    }

private:
    HardDisk *hardDisk;
    Cpu *cpu;
    Memory *memory;

};

int main(int argc, char *argv[]) {

    HardDisk *hardDisk = new XiJie();
    Cpu *cpu = new IntelCpu();
    Memory *memory = new KingstonMemory();


    Computer *computer = new Computer();
    computer->setHardDisk(hardDisk);
    computer->setCpu(cpu);
    computer->setMemory(memory);
    computer->run();
    return 0;
}
