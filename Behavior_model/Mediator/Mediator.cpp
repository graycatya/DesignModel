#include"Mediator.h"
#include"Colleage.h"


ConcreteMediator::ConcreteMediator()
{

}

ConcreteMediator::ConcreteMediator(Colleage* clgA, Colleage* clgB)
{
    _clgA = clgA;
    _clgB = clgB;
}

ConcreteMediator::~ConcreteMediator()
{

}

void ConcreteMediator::SetConcreteColleageA(Colleage* clgA)
{
    _clgA = clgA;
}

void ConcreteMediator::SetConcreteColleageB(Colleage* clgB)
{
    _clgB = clgB;
}

Colleage* ConcreteMediator::GetConcreteColleageA()
{
    return _clgA;
}

Colleage* ConcreteMediator::GetConcreteColleageB()
{
    return _clgB;
}

void ConcreteMediator::IntroColleage(Colleage* clgA, Colleage* clgB)
{
    _clgA = clgA;
    _clgB = clgB;
}

void ConcreteMediator::DoActionFromAtoB()
{
    _clgB->SetSate(_clgA->GetState());
}

void ConcreteMediator::DoActionFromAtoA()
{
    _clgA->SetSate(_clgB->GetState());
}