#include"Visitor.h"

#include"Element.h"

#include<iostream>

using namespace std;

void ConcreteVisitorA::VisitConcreteElementA(Element* elm)
{
    cout << "i will visit ConcreteElementA..." << endl;
}   

void ConcreteVisitorA::VisitConcreteElementB(Element* elm)
{
    cout << "i will visit ConcreteElementB..." << endl;
}

void ConcreteVisitorB::VisitConcreteElementA(Element* elm)
{
    cout << "i will visit ConcreteElementA..." << endl;
}

void ConcreteVisitorB::VisitConcreteElementB(Element* elm)
{
    cout << "i will visit ConcreteElementB..." << endl;
}