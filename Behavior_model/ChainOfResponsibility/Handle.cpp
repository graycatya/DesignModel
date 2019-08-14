#include<iostream>
#include"Handle.h"

using namespace std;


ConcreteHandleA::ConcreteHandleA()
{

}

ConcreteHandleA::~ConcreteHandleA()
{

}

ConcreteHandleA::ConcreteHandleA(Handle* succ) : Handle(succ)
{
    
}

void ConcreteHandleA::HandleRequest()
{
    if(this->GetSuccessor() != 0)
    {
        cout << "ConcreteHandleA ����Ȩ������̽ڵ�......" << endl;
        this->GetSuccessor()->HandleRequest();
    }
    else
    {
        cout << "ConcreteHandleA û�к�̽ڵ㣬�Լ�����......." << endl;
    }
}

ConcreteHandleB::ConcreteHandleB()
{

}

ConcreteHandleB::~ConcreteHandleB()
{

}

ConcreteHandleB::ConcreteHandleB(Handle* succ) : Handle(succ)
{

}

void ConcreteHandleB::HandleRequest()
{
    if(this->GetSuccessor() != 0)
    {
        cout << "ConcreteHandleB ����Ȩ������̽ڵ�......" << endl;
        this->GetSuccessor()->HandleRequest();
    }
    else
    {
        cout << "ConcreteHandleB û�к�̽ڵ�,�Լ�����......." << endl;
    }
}