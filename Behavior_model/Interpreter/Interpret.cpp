#include"Interpret.h"
#include"Context.h"
#include<iostream>

using namespace std;

TerminalExpression::TerminalExpression(const string& statement)
{
    this->_statement = statement;
}

TerminalExpression::~TerminalExpression()
{

}

void TerminalExpression::Interpret(const Context_& c)
{
    cout << this->_statement << "TerminalExpression" << endl;
}


NonterminalExpression::NonterminalExpression(AbstractExpression* expression, int times)
{
    this->_expression = expression;
    this->_times = times;
}

NonterminalExpression::~NonterminalExpression()
{

}

void NonterminalExpression::Interpret(const Context_& c)
{
    for(int i = 0; i < _times; i++)
    {
        this->_expression->Interpret(c);
    }
}