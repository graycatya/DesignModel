#include"State.h"
#include"Context.h"

State::State() 
{}
State::~State() 
{}
void State::OperationInterface(Context*)
{}
void State::OperationChangeState(Context*)
{}

bool State::ChangeState(Context* con, State* st) 
{ return con->ChangeState(st); }

ConcreteStateA::ConcreteStateA() {}
ConcreteStateA::~ConcreteStateA() {}
void ConcreteStateA::OperationInterface(Context* con) 
{
    cout << "ConcreteStateA::OperationInterface......" << endl;
}
void ConcreteStateA::OperationChangeState(Context* con) 
{
    OperationInterface(con);
    this->ChangeState(con, new ConcreteStateB());
}

ConcreteStateB::ConcreteStateB() {}
ConcreteStateB::~ConcreteStateB() {}
void ConcreteStateB::OperationInterface(Context* con) 
{
    cout << "ConcreteStateB::OperationInterface......" << endl;
}
void ConcreteStateB::OperationChangeState(Context* con) 
{
    OperationInterface(con);
    this->ChangeState(con, new ConcreteStateA());
}