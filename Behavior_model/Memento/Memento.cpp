#include<iostream>
#include"Memento.h"
typedef string State;

Originator::Originator()
{
    _sdt = "";
    _mt = 0;
}
Originator::Originator(const State& sdt)
{
    _sdt = sdt;
    _mt = 0;
}
Originator::~Originator() {}

Memento* Originator::CreateMemento()
{
    return new Memento(_sdt);
}

void Originator::SetMemento(Memento* men)
{

}

void Originator::RestoreToMemento(Memento* mt)
{
    this->_sdt = mt->GetState();
}

State Originator::GetState()
{
    return _sdt;
}

void Originator::SetState(const State& sdt)
{
    _sdt = sdt;
}

void Originator::PrintState()
{
    cout << this->_sdt << "......" << endl;
}

Memento::Memento() {}

Memento::Memento(const State& sdt) { _sdt = sdt; }

Memento::~Memento(){}

void Memento::SetState(const State& sdt) { _sdt = sdt; }
State Memento::GetState() { return _sdt; }