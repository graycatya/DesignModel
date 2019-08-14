#include"Element.h"
#include"Visitor.h"
#include<iostream>
using namespace std;

void ConcreteElementA::Accept(Visitor* vis)
{
    vis->VisitConcreteElementA(this);
    cout << "Visiting ConcreteElementA..." << endl;
}

void ConcreteElementB::Accept(Visitor* vis)
{
    vis->VisitConcreteElementB(this);
    cout << "Visiting ConcreteElementB..." << endl;
}