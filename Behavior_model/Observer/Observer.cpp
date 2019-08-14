#include"Observer.h"
#include"Subject.h"

#include <iostream>
#include <string>

using namespace std;

CSubject* ConcreteObserverA::GetSubject()
{
    return _sub;
}

ConcreteObserverA::ConcreteObserverA(CSubject* sub)
{
    _sub = sub;
    _sub->Attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
    _sub->Detach(this);
    if(_sub != nullptr)
        delete _sub;
}

void ConcreteObserverA::Update(CSubject* sub)
{
    _st = sub->GetState();

    PrintInfo();
}

void ConcreteObserverA::PrintInfo()
{
    cout << "ConcreteObserverA Observer......"  << _sub->GetState() << endl;
}




CSubject* ConcreteObserverB::GetSubject()
{
    return _sub;
}

ConcreteObserverB::ConcreteObserverB(CSubject* sub)
{
    _sub = sub;
    _sub->Attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
    _sub->Detach(this);
    if(_sub != nullptr)
        delete _sub;
}

void ConcreteObserverB::Update(CSubject* sub)
{
    _st = sub->GetState();

    PrintInfo();
}

void ConcreteObserverB::PrintInfo()
{
    cout << "ConcreteObserverB Observer......"  << _sub->GetState() << endl;
}