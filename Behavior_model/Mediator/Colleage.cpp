#include"Colleage.h"
#include"Mediator.h"

Colleage::Colleage()
{

}

Colleage::~Colleage()
{

}

Colleage::Colleage(Mediator* mdt)
{
    this->_mdt = mdt;
}


ConcreteColleageA::ConcreteColleageA()
{

}

ConcreteColleageA::ConcreteColleageA(Mediator* mdt) : Colleage(mdt)
{

}

ConcreteColleageA::~ConcreteColleageA()
{

}

void ConcreteColleageA::Aciton()
{
    _mdt->DoActionFromAtoB();
    cout << "State of ConcreteColleageB:" << this->GetState() << endl;
}

void ConcreteColleageA::SetSate(const string& sdt)
{
    _sdt = sdt;
}

string ConcreteColleageA::GetState()
{
    return _sdt;
}


ConcreteColleageB::ConcreteColleageB()
{

}

ConcreteColleageB::ConcreteColleageB(Mediator* mdt) : Colleage(mdt)
{

}

ConcreteColleageB::~ConcreteColleageB()
{

}

void ConcreteColleageB::Aciton()
{
    _mdt->DoActionFromAtoA();
    cout << "State of ConcreteColleageA:" << this->GetState() << endl;
}

void ConcreteColleageB::SetSate(const string& sdt)
{
    _sdt = sdt;
}

string ConcreteColleageB::GetState()
{
    return _sdt;
}