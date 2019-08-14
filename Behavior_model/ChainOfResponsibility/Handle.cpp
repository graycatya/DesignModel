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
        cout << "ConcreteHandleA 处理权交给后继节点......" << endl;
        this->GetSuccessor()->HandleRequest();
    }
    else
    {
        cout << "ConcreteHandleA 没有后继节点，自己处理......." << endl;
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
        cout << "ConcreteHandleB 处理权交给后继节点......" << endl;
        this->GetSuccessor()->HandleRequest();
    }
    else
    {
        cout << "ConcreteHandleB 没有后继节点,自己处理......." << endl;
    }
}