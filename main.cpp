//////////////////////////////////////////////////////////
// Created by hsl on 2022/6/21.
/*
����˵�� : ������תԭ��
*/
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;


///С
///��
class HardDisk{
public:
    virtual void save(string data) = 0;
    virtual string get() = 0;
};
class XiJie : public HardDisk{
public:
    void save(string data){cout << "ϣ�ݴ洢����  " << data << endl;}

    string get()override{
        cout << "ʹ��ϣ�ݶ�ȡ����" << endl;
        return "����";
    }
};

class  Cpu{
public:
    virtual void run() = 0;
};
class IntelCpu : public Cpu{
public:
    void run()override{
        cout << "ʹ��Intel������" <<endl;
    }
};

class Memory{
public:
    virtual void save() = 0;
};
class KingstonMemory : public Memory{
public:
    void save()override{
        cout << "ʹ�ý�ʿ���ڴ���" << endl;
    }
};

class Computer{

public:
    void run(){
        cout << "���м����" << endl;
        string data = hardDisk->get();
        cout << "ϣ�ݴ洢����  " << data << endl;
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
