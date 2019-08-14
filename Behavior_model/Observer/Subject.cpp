#include "Subject.h"
#include "Observer.h"

#include <iostream>

using namespace std;

typedef string state;

CSubject::~CSubject()
{

}

void CSubject::Attach(Observer* obv)
{
    _obvs->push_front(obv);
}

void CSubject::Detach(Observer* obv)
{
    if(obv != nullptr)
        _obvs->remove(obv);
}

void CSubject::Notify()
{
    list<Observer*>::iterator it;
    it = _obvs->begin();

    for(; it != _obvs->end(); it++)
    {
        (*it)->Update(this);
    }
}

CSubject::CSubject()
{
    _obvs = new list<Observer*>;
}

ConcreteSubject::ConcreteSubject()
{
    _st = '\0';
}

ConcreteSubject::~ConcreteSubject()
{

}

State ConcreteSubject::GetState()
{
    return _st;
}

void ConcreteSubject::SetState(const State& st)
{
    _st = st;
}